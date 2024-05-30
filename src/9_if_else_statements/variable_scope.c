// There are two types of scope:
// Local Variable Scope
// Global Variable Scope

// To understand an example of a local scope, here is an example of a C function

#include <stdio.h>

void addNumbers(int number1, int number2) {
	int result = number1 + number2;
	printf("Result inside the function call: ");
	printf("Result = %d\n", result); // Result inside the function call: Result = 11
}

// But we can return a value to be able to use it...
int addNumbersReturn(int number1, int number2) {
	int result = number1 + number2;
	printf("Calling the returning function:\n");
	return result;
}


// Global variables:

// Global variables are variables declared outside a function
// Global variables are accessed in the entire program...

// A Global Variable is accessible from any function
// WITHIN the same TRANSLATION UNIT (i.e., the same source file).

// So, if you declare a global variable outside a function in a file,
// say `file1.c`, it will be accessible from nay function within `file1.c`,
// but not from functions in other files, such as `file.c`,
// unless you use an `extern` declaration in those other files.

// To make a global variable accessible from multipel files,
// you need to declare it in a header file (e.g., `globals.h`)
// with an `extern` keyword

int resultGlobal;

void addNumbersGlobal(int number1, int number2) {
	resultGlobal = number1 + number2;
	printf("Result with the global variable: ");
	printf("Result = %d\n", resultGlobal);
}

int main() {

	addNumbers(5, 6);
//	printf("Result outiside the function call: ");
//	printf("Result = %d\n", result); // error: 'result' undeclared

	int resultSum = addNumbersReturn(5, 66);
	printf("Result outside the function: ");
	printf("Result = %d\n", resultSum); // Result outside the function: Result = 71


	addNumbersGlobal(5, 15); // Result with the global variable: Result = 20

	return 0;
}
