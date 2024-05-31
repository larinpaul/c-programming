#include <stdio.h>

// We haven't provided any definition for printf,
// instead, we directly used it in out program.
// In C programming, a standard library function
// is a predefined function, which is already defined inside a file,
// and we can directly use them in our program.

// In our case, the definition of printf is present inside stdio.h header file,
// that's why we included stdio.h header file inside out program.

// And while the file is included, we can use the printf function
// inside out program.

// Let's learn about standard C library files...

// math Header File
#include <math.h>


// When you pass a constant value, the compiler
// can perform the calculation at compile time,
// so it doesn't need to link the math library.
// When you compile the program, the compiler only checks the declarations, not definitions.
// If the linker can't find the definition, you'll get an error or undexpected behavior...

// To fix the issues on your machine, try the following:
// * Make sure you're compiling your program with the `-lm` linker flag to include the math library.
// * Declare the math library functions explicitly, even though they are already declared in `math.h`.
// This can help the compiler and linker understand what's going on.
// * Check your compiler and linker versions to ensure they're compatible with the math library.


// Now let's lean about different library functions available
// inside the ctype.h header file
// This file provide functions to perform various operations
// on characters, hence it is known as a character type header file...

#include <ctype.h>

int main() {

	printf("Hello World\n");

	int num = 25;

	double num2 = sqrt(25);

	printf("Square root %lf\n", num2);

//	printf("Square root %lf\n",sqrt(num)); // This doesn't seem to work for some reason, even though it works on the instructor's machine...
	// It also works at:
	// https://www.programiz.com/c-programming/online-compiler/

	// We can also use the cbrt() function to compute the cube root

	int num3 = 27;
//	printf("Cube root %lf", cbrt(num3));
//	double num33 = cbrt(num3); // this also doesn't work, sadly...
	double num33 = cbrt(27); // For some reason, this works, using 27 instead of a variable
	printf("Cube root %lf\n", num33);


	int a = 5;
	int b = 2;

//	double result = pow(a, b); // Again, doesn't work...
	double result = pow(5, 2); // While this works for some reason...
	printf("Power: %lf\n", result); // Power: 25.000000
	printf("Power: %lf\n", pow(5, 2)); // This also works...
	// I guess the problem is in connecting the header file or something...
	// Or maybe the compiler machinations are needed...


	printf("Let's work with ctype.h \n");
	char alpha = 'e';
	printf("%d\n", alpha); // 101
	printf("%c\n", alpha); // e
	// Let's first convert this character to upper case
	char upper = toupper(alpha);
	printf("%d\n", upper); // 69
	printf("%c\n", upper); // N

	char lower = tolower(upper);
	printf("\n%c\n", lower); // e


	return 0;
}
