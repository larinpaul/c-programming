/*
int (4 bytes) %d for printing
double (8 bytes) %lf for printing
float (4 bytes) %f for printing
char %c for printing
 */

#include <stdio.h>

int main() {

	int age = 10;
	printf("Age = %d", age);

	double number = 12.45;
	printf("%lf", number);
	printf("%.2lf", number); // Print out with only 2 decimal precision points
	// 12.45

	float number1 = 10.9f;
	printf("\n%f", number1); // 10.900000
	printf("\n%.1f"); // 10.9


	// By the way, we can use double and float to store exponential numbers
	double numberExpo = 5.5e6;
	printf("%lf", number); // 5500000.000000


	char character = 'z';
	printf("%c", character); // z
	// Under the hood, chars are ints, so we can do something like this:
	printf(" %d", character); // 122
	// Characters are internally stored as integers


	// sizeof() operator
	int age2;
	double number2;

	// Writes out the size in bytes
	printf("int size = %zu", sizeof(age)); // int size = 4
	printf("\ndouble size = %zu", sizeof(number)); // double size = 8

	return 0;
}



