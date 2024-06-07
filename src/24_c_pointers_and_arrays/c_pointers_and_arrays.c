#include <stdio.h>

int main() {

	int numbers[5] = {1, 3, 5, 7, 9};

	for (int i = 0; i < 5; ++i) {
		printf("%d = %p\n", numbers[i], &numbers[i]);
	}

	// Now let's see something interesting
	// For that, let's print out the address of the array
	// without any array indexes

	printf("Array address: %p\n", numbers); // As you can see, the address of the first element is printed out
	// And also, the difference between array elements is 4:
//	1 = 0x7ffc722f6340
//	3 = 0x7ffc722f6344
//	5 = 0x7ffc722f6348
//	7 = 0x7ffc722f634c
//	9 = 0x7ffc722f6350
//	Array address: 0x7ffc722f6340
	// This is because the size of int is 4 bytes
	// Also, we used the name of the array, "numbers" without the & sign
	// This is because array names are by default converted to pointers.
	// And we can use the name of the array directly
	// So from now on, remember, when I use the array name, it's a pointer...

	printf("Array address of 1: %p\n", numbers + 1); // the address of the second element
	printf("Array address of 2: %p\n", numbers + 2); // the address of the third element
	printf("Array address of 2: %p\n", numbers + 3); // the address of the fourth element
	printf("Array address of 3: %p\n", numbers + 4); // don't forget that they're hexadecimal :)
//	Array address: 0x7ffe67816180
//	Array address: 0x7ffe67816184
//	Array address: 0x7ffe67816188
	printf("\n");

	// Now let's print them out again:
	for (int i = 0; i < 5; ++i) {
		printf("%d = %p\n", numbers[i], &numbers[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; ++i) {
		printf("%d = %p\n", numbers[i], numbers + i);
	}
	printf("\n");




	return 0;
}



