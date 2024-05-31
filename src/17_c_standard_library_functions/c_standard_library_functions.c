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


int main() {

	printf("Hello World\n");

	int num = 25;

	double num2 = sqrt(25);

	printf("Square root %lf\n", num2);

//	printf("Square root %lf\n",sqrt(num)); // This doesn't seem to work for some reason, even though it works on the instructor's machine...
	// It also works at:
	// https://www.programiz.com/c-programming/online-compiler/



	return 0;
}




