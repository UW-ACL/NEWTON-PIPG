# Newton PIPG - PDG Example Code

This repository contains the implementation of the Newton PIPG algorithm for the PDG example, designed to generalize Newton PIPG to problems involving linear inequalities and projections onto second-order cones and balls.

## Directory Structure

- **main**: Contains the main testing program (`Main.m`) for running the PDG example and a helper script (`Test_pipg_30.m`) for simplifying MATLAB C code generation.
- **devnewton_code**: Legacy code used as references for the updated implementation.
- **devnewton_code_new**: Enhanced version of Newton PIPG with added compatibility for various projections.
- **pipg_newton_pipg_withtimer**: Implementation of Newton PIPG with a built-in timer to measure runtime efficiency.
- **Projection related**: Functions for projection calculations and their derivatives.
- **vec_pipg**: A vectorized implementation of Newton PIPG using standard linear algebra operations, preserved as a sample reference.
- **supportive functions**: Auxiliary functions for data generation, data formatting, and supporting the main algorithms.

## Usage

1. **MATLAB to C Code Generation**:  
   All code is initially implemented in MATLAB and must be compiled into C using MATLAB Coder for optimal performance. To generate C code:
   - Follow the MATLAB Coder process:https://www.mathworks.com/help/coder/gs/generating-c-code-from-matlab-code-using-the-matlab-coder-project-interface.html
   - Ensure "Enable dynamic memory allocation" is disabled.
   - Use `Test_pipg_30.m` in the `main` folder to simplify the compilation process.

   **Note**:  
   The current algorithm is only compatible with specific dimensions. This limitation arises because MATLAB Coder requires fixed input sizes when converting MATLAB code to C.  
   - If you wish to test other examples or input sizes, you must recompile the MATLAB code using MATLAB Coder.  
   - After compilation, function names are often appended with a suffix, such as `-mex`. When running the code:
     - To use the original MATLAB version, comment out the `-mex` version.
     - To use the faster C implementation, comment out the original version and use the `-mex` version instead.

2. **Running the Main Program**:  
   Use the `Main.m` file in the `main` folder to execute the PDG example and test the Newton PIPG algorithm.

## Dependencies

- **yamlip**: This library and its built-in `ecos` module are required for running the algorithms.  
  A sample implementation of `yamlip` usage is included in the repository for reference.
