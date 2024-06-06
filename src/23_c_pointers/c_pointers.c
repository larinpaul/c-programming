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





	return 0;
}
