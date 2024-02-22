# The Preprocessor

A preprocessor is a software that edits C files before they are compiled. It is part of the compiler.

The preprocessor is controlled by _preprocessing directives_ that begin with '#', for example __#include__ and __#define__.

When we use the #define directive, we are biding a name to a definition - usually a constant. The preprocessor then goes through the entire file and replaces the name by it's definition. And in the case of the #include directive, the preprocessor appends the content of a file to the file being compiled. After the preprocessor executes the directive, it removes them.

The preprocessor also removes comments, and some can even remove unnecessary white-space characters.

## Directive categories

- __Macro definition__: The #define directive defines a macro; the #undef directive removes a macro.
- __File inclusion__: The #include directive includes contents of a specified file in a program.
- __Conditional compilation__: The #if, #ifdef, #ifndef, #elif, #else and #endif directives allow blocks of code to be included or excluded from a program depending on conditions that can be tested by the preprocessor.
- __Special directives__: #error, #line and #pragma

### Macro definition
There are simple and parameterized macros.
Simple macros have an identifier and a repĺacement list, that may include identifiers, keywords, numeric constants, character constants, string literals, operators, and punctuation.
Parameterized macros can receive parameters besides an identifier and a replacement list. They often serve as simple functions.

```C
#define THIS 10         // Simple macro
#define DOUBLE(n) ((n)*2)   // Parameterized macro
```

Using a parameterized macro instead of an actual function has some advantages:

- It can be slightly faster.
- Macro parameters do not have a type

And some disadvantages:

- Compiled code will be larger
- Macro parameters are not type-checked
- Not possible to have a pointer to a macro
- Macros can evaluate its arguments more than once

#### Special operators

Macro definitions may contain two special operators: # and ##.

The # operator converts a macro argument into a string literal and can only appear on the replacement list of parameterized macros.
The ## operator concatenates two tokens together

#### Predefined macros

C has some predefined macros that represents either an integer constant or a string literal. These macros provide information about the current compilation or about the compiler itself.

- \_\_LINE\_\_: Line number of file being compiled
- \_\_FILE\_\_: Name of file being compiled
- \_\_DATE\_\_: Date of compilation ("Mmm dd yyyy")
- \_\_TIME\_\_: Time of compilation ("hh:mm:ss")
- \_\_STDC\_\_: 1 if the compiler conforms to the C standard (C89 or C99)

### Conditional compilation

These directives instruct the preprocessor to include or exclude lines from the program depending on some condition.

One of the conditions that the preprocessor can test is the definition of certain macros, using the _defined_ operator or the #ifdef and #ifndef directives.

```c
#define CONDITION 1

#if CONDITION
  // Do something
#else
  // Do something else
#endif
```

Conditional compilation is often applied to:
- Writing programs that are portable to multiple machines or operating systems
- Writing programs that can be compiled with different compilers
- Providing a default definition to a macro that is not defined

### Special directives

#### #error

This directive prints an error message and often compilers will terminate compilation when an #error directive is found. They are usually used in conjunction with conditional directives.

#### #line

This directive changes the \_\_LINE\_\_ and optionally \_\_FILE\_\_ macros.

#### #pragma

This directive is used to request special behavior from the compiler. The commands that can be used with the #pragma directive depend on the compiler being used and any unrecognized command will be ignored by the preprocessor.

In C99 the #pragma directive can be substituted by the _Pragma operator.

