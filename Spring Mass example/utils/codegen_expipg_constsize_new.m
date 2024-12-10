function [] = codegen_expipg_constsize_new(pp,ppv)
%{
05/05/2022
Purnanand Elango and Dayou

Generate C code for exPIPG functions written scripts MATLAB using the Coder
Variable-size data is *not* allowed; code generation is required everytime
problem size changes

Creates functions with suffixes of the form 
..._n?_m?_N?_mex

Refer to the following pages for information about handling variable size input:
    - https://www.mathworks.com/help/coder/ug/code-generation-for-variable-size-data.html
    - https://www.mathworks.com/help/coder/ug/what-is-variable-size-data.html
    - https://www.mathworks.com/help/coder/ug/controlling-memory-allocation-of-bounded-data.html
    - https://www.mathworks.com/help/coder/ug/variable-size-data-when-dynamic-memory-allocation-is-disabled.html
    - https://www.mathworks.com/help/coder/ref/coder.typeof.html

Input:
    alg_type{1}:
        Vectorized ('VEC')
        De-vectorized ('DVEC')
    alg_type{2}:
        Infeasibility detection based on dual error ('old_infeas')
        New infeasibility criteria developed by Yue Yu on 04/30/2022 ('new_infeas')
        New infeasibility and feasibility criteria developed by Yue Yu on 04/30/2022 and 06/13/2022 respectively ('new')
%}

mxcfg = coder.config('mex');
mxcfg.EnableVariableSizing                          = false;
mxcfg.DynamicMemoryAllocation                       = 'Off';
mxcfg.DynamicMemoryAllocationForVariableSizeArrays  = 'Never';
mxcfg.PreserveArrayDimensions                       = false;
mxcfg.ResponsivenessChecks                          = false;
mxcfg.RowMajor                                      = true;
mxcfg.SaturateOnIntegerOverflow                     = false;
mxcfg.IntegrityChecks                               = false;
mxcfg.HighlightPotentialRowMajorIssues              = false;
mxcfg.HighlightImplicitExpansionIssues              = false;
mxcfg.GlobalDataSyncMethod                          = 'NoSync';
mxcfg.ConstantInputs                                = 'IgnoreValues';
mxcfg.TargetLang                                    = 'C';

mxcfg.EnableAutoParallelization                     = false;
mxcfg.EnableAutoExtrinsicCalls                      = false;
mxcfg.ExtrinsicCalls                                = false;
mxcfg.EnableRuntimeRecursion                        = false;
mxcfg.CompileTimeRecursionLimit                     = 0;

n = pp.n;                                           % State dim
m = pp.m;                                           % Control dim
N = pp.N;                                           % Horizon length
lw =length(ppv.w);
lz = length(ppv.zmax);
% Segment of the file name which will denote fixed problem size for
% which the generated file is valid
name_suffix = "_n" + num2str(n) + "_m" + num2str(m) + "_N" + num2str(N) + "_mex";
%
%
%



dvec_args = {coder.typeof(0.0,[n n],[0 0]), coder.typeof(0.0,[n m],[0 0]), coder.typeof(0.0,[n n],[0 0]),coder.typeof(0.0,[m n],[0 0]),coder.typeof(0.0,[lz 1],[0 0]),...
    coder.typeof(0.0,[lz 1],[0 0]), coder.typeof(0.0,[1 2],[0 0]), coder.typeof(0.0,[lz 1],[0 0]), coder.typeof(0.0,[lw 1],[0 0]),coder.typeof(0.0,[lz 1],[0 0]),...
    coder.typeof(0.0,[lz 1],[0 0]),coder.typeof(0.0,1,0), coder.typeof(0.0,1,0), coder.typeof(0.0,1,0), coder.typeof(0.0,1,0) };

 func_name = "newtonpipg/dev_pipg_separateinputtest" + name_suffix;
        codegen("newtonpipg/dev_pipg_separateinput.m","-config",mxcfg,"-d","newtonpipg/codegen/mex/dev_pipg_separateinput/","-o",func_name,"-args",dvec_args);

% Remove codegen source file; only retain the binaries
rmdir solvers/expipg/codegen/ s
end