// In C, dynamic memory allocation
// allows us to allocate memory dynamically,
// that is, after we run the program :)

// Let's first revise the concept of pointers:

#include <stdio.h>

int main() {

	int var = 32;

	int* ptr = &var; // the pointer variable ptr stores the memory address of the var variable

	printf("%d\n", *ptr); // 32


	// C provides three functions to provide dynamic memory allocation:
	// malloc()
	// realloc()
	// free()


	// malloc() Function
	// malloc() - memory allocation
	// Is used to reserve a block of memory of the specific size
	// for example, to store the n elements of the double type

	int n2 = 100; // each int is 4 bytes, so 100*4=400 bytes

	int* ptr2;

	ptr2 = (int*) malloc(n2 * sizeof(int));


	// Once the work with allocating memory is completed,
	// we use the free() function to release the dynamically allocated memory
	// Here is the syntax to use free()
	// free(ptr)
	// here ptr is a pointer memory which stores the memory allocated by malloc

	int n3 = 4;

	int* ptr3;

	ptr3 = (int*) malloc(n3 * sizeof(int));

	printf("Enter the n3 (4) input values:\n");
	for (int i = 0; i < n3; ++i) {
		scanf("%d", ptr3 + i);
	}

	printf("Input values:\n");
	for (int i = 0; i < n3; ++i) {
		printf("%d\n", *(ptr3 + i));
	}


	return 0;
}


