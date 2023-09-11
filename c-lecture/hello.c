#include <stdio.h>

// int main(void)
// {
//     printf("hello, world\n");
// }

// CONSOLE:
// ➜  $ make hello
// make: `hello' is up to date.
// ➜  $ ./hello
// hello, world

// #include <stdio.h> // preprocessor directive that tells the C compiler to include the standard input/output library (stdio.h) -- this library provides functions like printf and scanf for input and output operations (importing standard io library)

// int main(void) // This line is the beginning of the main function, which is the entry point for the program. In C, every C program must have a main function, and it returns an integer (int) value. The void inside the parentheses indicates that this function takes no arguments.

// {
//     printf("hello, world\n"); //This line is a function call to printf. printf is a function used for formatted output, and it is part of the stdio library. In this line, it is used to print the string "hello, world" followed by a newline character (\n) to the standard output (usually the console or terminal).
// }


// NOTES:
    // -leaving out a semicolon will result in error when compiling
    // ***** Documentaiton: https://manual.cs50.io/

// int main(void)
// {
//     char name[100]; // Assuming the name won't exceed 99 characters
//     printf("What's your name? "); //Get input from terminal
//     scanf("%s", name); //use scanf to read the user's input as a string and store it in the name variable
//     printf("Hello, %s!\n", name); // The %s format specifier is used to indicate that a string should be inserted at that position in the string. The name variable is passed as an argument to printf, and its value will replace %s in the output string
//     return 0; // A return value other than 0 typically indicates an error condition. Returning 0 is a convention to indicate that the program terminated without any errors
// }

