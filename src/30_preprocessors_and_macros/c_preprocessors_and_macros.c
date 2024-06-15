// Let's start with the most common preprocessor

// #include Preprocessor

// for example
// #include <stdio.h> includes stdio.h header file
// #include <math.h> includes math.h header file

// Once we have included the header file, we can use all the functions from the header file
// for example,
// printf()
// scanf()
// sqrt()
// cbrt()

// Let's see an example

#include <stdio.h>
#include <math.h>

#define PI 3.1415

#define circleArea(r) (PI * r * r)

int main() {

	int number = 36;

//	double squareRoot = sqrt(number);
//	printf("%.lf", squareRoot); // 6.00
	// We are getting an error, I guess it's because math.h is not included or something...
	// in the online compiler, it all works...
//	double cubeRoot = cbrt(number);
//	printf("%.2lf", cubeRoot);


	double radius = 12.4;

	double area = PI * radius * radius;
	double areaMacro = circleArea(radius);


	printf("%.4lf\n", PI); // 3.1415
	printf("%.2lf\n", area); // 483.04
	printf("%.2lf\n", areaMacro); // 483.04


	return 0;
}

// There is also #define preprocessor
// #define PI 3.1415
// 	here, PI is a macro


// We can also define Function Macros
// Macros are a piece of code that has been given some name
// hence we can also define a complete function as a macro
// Let's see an example...








