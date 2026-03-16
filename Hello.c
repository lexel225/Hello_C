/*
 * This is a test program demonstrating basic C functionality
 * including I/O operations, macros, and utility functions.
 *
 * Author: lexel225
 * Version: 2.0
**/

#include <stdio.h>   // Standard I/O library (printf, scanf)
#include <string.h>  // String functions (strlen)
#include <stdlib.h>  // Standard library functions (rand, srand)
#include <time.h>    // Time functions (clock)

// Boolean definitions
#define TRUE (1)
#define FALSE (0)

// Macro to return the maximum of two values
#define MAX(x,y) (x>=y?x:y)

// Generates and outputs a random number based on user input
// Prompts user for maximum value, then outputs a random number from 0 to max
void Output_random_number(void)
{
	unsigned int max;

	// Seed the random number generator with current time
	srand((unsigned int)clock());
	printf("Input Maximal number:");
	scanf("%d", &max);

	// Output random number only if max is not zero
	if (max != 0)
		printf("Output random number: %d\n", rand() % max);
	else
	{
		// Error case: user entered zero
		printf("Input zero!!");
	}
	
}

// Reads a string from user input and outputs its length
void Output_string_length(void)
{
	char input_str[1024];  // Buffer to store input string (1024 bytes)

	printf("Input string:");
	scanf("%s", input_str);
	// Debug: Uncomment below to also output the string itself
	// printf("Output string: %s\n", input_str);
	printf("Output string length: %d\n", (unsigned int)strlen(input_str));
}

// Main entry point - demonstrates basic C functionality
// Tests macro functionality and string output
int main(void)
{
	// Output greeting message
	printf("Hello World\n");

	// Note: The following functions are commented out
	// Uncomment below to test random number generation
	// Output_random_number();

	// Uncomment below to test string length function
	// Output_string_length();

	// Demonstrate MAX macro with sample values
	printf("MAX(1000,1)=%d\n", MAX(1000,1));
	
	// Output farewell message
	printf("Good Bye!!!\n");

	return TRUE;
}

