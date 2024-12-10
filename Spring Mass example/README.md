# Newton PIPG - Spring Math Problem Solver

This repository implements the Newton PIPG algorithm for solving Spring-Mass problems with box constraints. Compared to other implementations, this program focuses solely on box constraints.

## Directory Structure

- **main**: 
  - Contains the main program (`main.m`) to run the entire system. This is the entry point for executing the Newton PIPG algorithm on the Spring-Mass problem.
  
- **utils**: 
  - Includes all functions for generating problem data. Use this folder to create customized datasets for testing.

- **solvers**: 
  - Contains implementations of additional solvers, such as MOSEK, OSQP, and SCS, for benchmarking against Newton PIPG.
  - **Note**: To use these solvers, ensure that they are installed on your system and that your licenses are valid and up-to-date.

- **newtonpipg**: 
  - Contains the implementation of the Newton PIPG algorithm. The code is initially written in MATLAB but is intended to be converted into C using Matlab Coder for improved performance.

## Usage

1. **Running the Main Program**:
   - Use `main.m` to execute the Newton PIPG algorithm on generated data. The data is created using the functions in the `utils` folder.

2. **Using Additional Solvers**:
   - If you wish to use solvers like MOSEK, OSQP, or SCS, ensure they are installed and properly configured on your machine. Refer to their respective documentation for installation and usage instructions.

3. **MATLAB to C Code Conversion**:
   - The Newton PIPG algorithm is designed to be compiled into C for optimal performance. To do this:
     - Use MATLAB Coder to convert MATLAB code into C.
     - Disable "Enable dynamic memory allocation" in the MATLAB Coder settings to ensure better computation speed.
     - As this project does not include a dedicated script for simplifying the conversion process, refer to the general MATLAB Coder workflow for guidance.
   - **Important**: After compilation, the generated function names often include an `-mex` suffix. When running the code:
     - To use the original MATLAB version, comment out the `-mex` version.
     - To use the compiled C version, comment out the original and use the `-mex` version instead.
     - There is a switch variable in `main.m` that controls the version of the function. 


