// Pointers are one of those features that make C so powerfull

// It allows us to work directly with the computer memory

// Before learning about pointers, let's first learn about addresses

// In C, whenever we declare a variable, a space would be allocated in the memory for the variable.
int age;
// And C allows us to access the address of the variable
// We use the ampersand symbol & with the name &age to access the memory address

#include <stdio.h>

int main() {

	int age = 25;

	printf("%p\n", &age); // 0x7ffd6f8ffc34
					   // we see the memory address
					  // We may also get a different output when running the same code

//	// If you remember, we already used the ampersand symbol & with scanf
//	printf("Please write in some integer number: \n");
//	scanf("%d", &age);
//	// This is because with scanf, we are instructing the compiler
//	// to store the input value at the memory address specified by this &age
//	printf("%d\n", age);

//	printf("I wonder what will happen if I will use age without the ampersand &...\n");
//	scanf("%d", age);
//	printf("%d", age); // Yeah, I don't seem to get anything at all...


	// Pointer variable.
	// Just like the regular variable, a pointer is also a variable
	// However, a pointer variable stored the memory addresses of that variable, not the actual value

	// Let's create a pointer variable
	int* ptr;
	// Let's compare it to a normal variable
	int var;

	// Now let's see how we can assign a value to a poitner variable.

	int age2 = 25;

	printf("%p\n", &age2); // 0x7fff068d4fcc

	int* ptr2 = &age2; // Stores the memory address of a variable

	printf("%p\n", ptr2); // the same result, 0x7fff068d4fcc


	// Access a value using pointer
	int age3 = 25;

	int* ptr3 = &age3;

	printf("Address: %p\n", ptr3); // Address: 0x7ffcd6618d94

	printf("Value: %d\n", *ptr3); // Value: 25
	printf("Value: %d\n", ptr3); // Value: -733939404
	printf("Address: %p\n", ptr3);


	// Change Value using Pointer
	int age4 = 25;

	int* ptr4 = &age4;

	*ptr4 = 31; // This code assigns a new value to the address pointed by the ptr4 variable

	printf("%d\n", age); // 31


	// Common Mistakes in Pointers

	// There are two ways to define pointers:
	int *ptr5; // This creates a lot of confusion sometimes... // SHOULD BE AVOIDED
	int* ptr555; // This one is clearer

	// Here is a confusing example
	int age55 = 55;
	int *ptr55 = &age55; // As you can see, * is attached to otr55,
					// so many think ptr55 is the pointer,
				// and try to print the address using *ptr55, which is wrong...
			// this is because *ptr55 hold THE VALUE of the pointer, NOT THE POINTER
	printf("%d\n", *ptr55); // 55
	printf("%p\n", *ptr55); // 0x37 which is wrong...
	// so, to avoid the confusion, it is highly recommended to create pointers like this:
	int* ptr5555;

	// In C, pointer arithmetic is a powerful feature
	// that allows you to navigate arrays, strings, and other data structures efficiently
	// ptr++ increments the pointer to point to the next element in an array
	// ptr-- decrements the pointer to point to the previous element in an array
	// ptr + offset adds an offset to the pointer, making it point to a memory address `offset` elements ahead.
	// ptr - offset subtracts an offset from the poiner, making it point to a memory address `offset` elements behind

	// In Go, pointer arithmetic is more limited and only allowed on pointers to arrays or slices.


	// Now let's revise pointers

	int number6;

	int* ptr6;

//	ptr6 = number6; // is wrong
	// ptr6 is a pointer which can only store memory addresses
	// and number is not a memory address, so ptr = number; is invalid

//	*ptr66 = &number66; // is also wrong
	// this is because *ptr66 is a value stored at the memory location
	// however &number66 is a memory address

	// Now, this is valid:
//	ptr666 = &number666; // Valid
	// This is because both ptr666 and &number666 represent a memory address

	// This is also valid code
//	*ptr6666 = number6666; // This is vaid
	// This is because both *ptr6666 and number6666 represent a value stored in a memory location


	return 0;
}
