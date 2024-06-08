#include <stdio.h>

int squareNummber(int number) {
	int square = number * number;
	return square;
}

int main() {

	int number = 25;

	int result = sqaureNumber(number);

	printf("Square of %d is %d", number, result);




	return 0;
}


