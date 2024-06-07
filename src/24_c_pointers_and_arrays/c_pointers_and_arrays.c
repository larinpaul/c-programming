//#include <stdio.h>
//
//int main() {
//
//	int numbers[5] = {1, 3, 5, 7, 9};
//
//	for (int i = 0; i < 5; ++i) {
//		printf("%d = %p\n", numbers[i], &numbers[i]);
//	}
//
//	// Now let's see something interesting
//	// For that, let's print out the address of the array
//	// without any array indexes
//
//	printf("Array address: %p\n", numbers); // As you can see, the address of the first element is printed out
//	// And also, the difference between array elements is 4:
////	1 = 0x7ffc722f6340
////	3 = 0x7ffc722f6344
////	5 = 0x7ffc722f6348
////	7 = 0x7ffc722f634c
////	9 = 0x7ffc722f6350
////	Array address: 0x7ffc722f6340
//	// This is because the size of int is 4 bytes
//	// Also, we used the name of the array, "numbers" without the & sign
//	// This is because array names are by default converted to pointers.
//	// And we can use the name of the array directly
//	// So from now on, remember, when I use the array name, it's a pointer...
//
//	printf("Array address of 1: %p\n", numbers + 1); // the address of the second element
//	printf("Array address of 2: %p\n", numbers + 2); // the address of the third element
//	printf("Array address of 2: %p\n", numbers + 3); // the address of the fourth element
//	printf("Array address of 3: %p\n", numbers + 4); // don't forget that they're hexadecimal :)
////	Array address: 0x7ffe67816180
////	Array address: 0x7ffe67816184
////	Array address: 0x7ffe67816188
//	printf("\n");
//
//	// Now let's print them out again:
//	for (int i = 0; i < 5; ++i) {
//		printf("%d = %p\n", numbers[i], &numbers[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; ++i) {
//		printf("%d = %p\n", numbers[i], numbers + i);
//	}
//	printf("\n");
//
//
//	// Access array elements using pointer
//	// int numbers[5] = {1,3,5,7,9};
//	// for an array numbers, numbers is the pointer that gives the address of the first element
//	// similarly, numbers + i gives the address of the ith element.
//
//	// Now, to access the first element, we can use *numbers
//	// *numbers
//	// similarly, to access the i element, we can use *(numbers + i)
//	// *(numbers + i)
//
//
//	int numbers2[5] = {21, 23, 25, 27, 29};
//
//	for (int i = 0; i < 5; ++i) { // numbers + i gives the address of the ith element
//		printf("%d = %p\n", numbers2[i], numbers2 + i);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; ++i) { // here we use *(numbers + i)
//		printf("%d = %p\n", *(numbers2 + i), numbers2 + i);
//	}					      // value 		// address
//	// In this way, we were able to access the value and the address of the pointers...
//	printf("\n");
//
//
//	// Just like accessing the elements, we can also change the array elements
//
//	int numbers3[5] = {31, 33, 35, 37, 39};
//
//	for (int i = 0; i < 5; ++i) {
//		printf("%d = %p\n", *(numbers3 + i), numbers3 + i);
//	}
//	printf("\n");
//
//	*numbers3 = 02; // represents the first element // 2
//	numbers3[1] = 11; // represents the second element // 11
//	*(numbers3 + 4) = 444; // represents the last element // 444
//
//	for (int i = 0; i < 5; ++i) {
//		printf("%d = %p\n", *(numbers3 + i), numbers3 + i);
//	}
//	printf("\n");
//
//
//
//	return 0;
//}
//
//
//
