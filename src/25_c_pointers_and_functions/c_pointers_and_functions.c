#include <stdio.h>

// Now, we are passing a variable to a function
int squareNumber(int number) {
	int square = number * number;
	return square;
}

// But we can also pass a pointer variable...
// int* is a pointer variable which stores the address of the variable
void findValue(int* num) {
	*num = 39;
}

void findSquare(int* number) {

	int square = *number * *number;
	*number = square;

}

// Return pointers from a function
int* addNumbers(int* num1, int* num2, int* sum) {

	*sum = *num1 + *num2;

	return sum;

}


int main() {

	int number = 21;

	int result = squareNumber(number);

	printf("Square of %d is %d\n", number, result); // Square of 21 is 441


	int number1 = 21;

	findValue(&number1);

	printf("Number: %d\n", number1); // Number: 39


	int number2 = 22;
	findSquare(&number2);
	printf("Square is %d\n", number2); // Square is 484


	int number31 = 32;
	int number32 = 18;
	int sum33;

	int* result33 = addNumbers(&number31, &number32, &sum33);

	printf("Sum is %d\n", *result33); // Sum is 50



	return 0;
}


