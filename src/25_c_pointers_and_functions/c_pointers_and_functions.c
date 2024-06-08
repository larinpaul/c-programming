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

int main() {

	int number = 21;

	int result = squareNumber(number);

	printf("Square of %d is %d\n", number, result);


	int number1 = 21;

	findValue(&number1);

	printf("Number: %d\n", number1);





	return 0;
}


