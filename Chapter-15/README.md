# Writing large programs

## Source files

Source files contain definitions of functions and external variables used in C programs.
They have the _.c_ extension.
One of the source files need to have a function named main, that will be the entry point of the program.

Programs are can be split into multiple source files to keep related code grouped in
the same file.

The advantages of doing this are:

- Grouping functions and variables in different files makes the program and it's structure easier to understand.
- The source files can be compiled separately, which saves time if changes only affect one source file.
- Separating functions makes them reusable and multi-purpose.

## Header files

When functions, types, macros and variables need to be shared between different source files, a header file is used.
They will prevent duplication and compilation problems.

### Type and macro definition

If there's a type or macro definition that is going to be used in more than one source file, putting them in a header file is beneficial because it makes modifications easier.

### Function declaration

In the case of functions that are going to be used by other source files, it's good to put their prototype in a header file because when compiling a file that uses one of those functions, the compiler will not need to make assumptions about it's return type and parameters number.

### Protecting header files

If a header file is compiled twice for some reason, there will be problems with duplicate macro and type definitions and function prototypes.
To avoid those problems, it's good practice to protect the header files using the `#ifndef` directive, to make sure the definitions and prototypes will only run if the file has not been compiled already.
