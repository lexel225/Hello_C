[![Build Status](https://travis-ci.com/lexel225/Hello_C.svg?branch=master)](https://travis-ci.com/lexel225/Hello_C)

# Hello_C

A simple C program demonstrating basic input/output, macros, and utility functions.

## Features
- Prints "Hello World" and "Good Bye!!!"
- Demonstrates a macro for maximum value: `MAX(x, y)`
- (Commented) Function to output a random number up to a user-specified maximum
- (Commented) Function to output the length of a user-input string

## Usage
Build and run the program using your preferred C compiler. Example with GCC:

```sh
gcc Hello.c -o Hello
./Hello
```

## Functions
- `Output_random_number()`: Prompts for a maximum value and prints a random number in the range [0, max). (Currently commented out in `main()`)
- `Output_string_length()`: Prompts for a string and prints its length. (Currently commented out in `main()`)
- `MAX(x, y)`: Macro to return the maximum of two values.

## Version History
- V1: Initial version
- V2: Updated README and added function descriptions
