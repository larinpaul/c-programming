//// In C, dynamic memory allocation
//// allows us to allocate memory dynamically,
//// that is, after we run the program :)
//
//// Let's first revise the concept of pointers:
//
//#include <stdio.h>
//
//int main() {
//
//	int var = 32;
//
//	int* ptr = &var; // the pointer variable ptr stores the memory address of the var variable
//
//	printf("%d\n", *ptr); // 32
//
//
//	// C provides three functions to provide dynamic memory allocation:
//	// malloc()
//	// realloc()
//	// free()
//
//
//	// malloc() Function
//	// malloc() - memory allocation
//	// Is used to reserve a block of memory of the specific size
//	// for example, to store the n elements of the double type
//
//	int n2 = 100; // each int is 4 bytes, so 100*4=400 bytes
//
//	int* ptr2;
//
//	ptr2 = (int*) malloc(n2 * sizeof(int));
//
//
//	// Once the work with allocating memory is completed,
//	// we use the free() function to release the dynamically allocated memory
//	// Here is the syntax to use free()
//	// free(ptr)
//	// here ptr is a pointer memory which stores the memory allocated by malloc
//
//	int n3 = 4;
//
//	int* ptr3;
//
//	ptr3 = (int*) malloc(n3 * sizeof(int));
//
////	printf("Enter the n3 (4) input values:\n");
////	for (int i = 0; i < n3; ++i) {
////		scanf("%d", ptr3 + i);
////	}
////
////	printf("Input values:\n");
////	for (int i = 0; i < n3; ++i) {
////		printf("%d\n", *(ptr3 + i));
////	}
//
//
//	// When memory allocation fails, malloc() functions returns null
//
//	// So let's write a condition to end the main() functions
//	// if the function cannot memory
//
//	int n4 = 4;
//
//	int* ptr4;
//
//	ptr4 = (int*) malloc(n4 * sizeof(int));
//
//	if (ptr4 == NULL) {
//		printf("Memory cannot be allocated");
//		return 0;
//	}
//
////	printf("Enter input values:\n");
////	for (int i = 0; i < n4; ++i) {
////		scanf("%d", ptr4 + i);
////	}
////
////	printf("Input Values:\n");
////	for (int i = 0; i < n4; ++i) {
////		printf("%d\n", *(ptr4 + i));
////	}
//
//	free(ptr4);
//
//
//	// realloc() Function
//
//	// In out previous example, we allocated 400 bytes of memory
//	// to store 4 integer values (maybe not 400 but 16?)
//	// ptr = (int*) malloc(4 * sizeof(int));
//	// Now, suppose we need to store two more integer data
//	// In this case, we use the realloc() function
//	// to change the size of the dynamically allocated memory
//	// Let's see the syntax to use realloc() function
//	// ptr = realloc(ptr, 6 * sizeof(int));
//
//	int n5 = 5;
//
//	int* ptr5;
//
//	ptr5 = (int*) malloc(n5 * sizeof(int));
//
//	if (ptr5 == NULL) {
//		printf("Memory cannot be allocated");
//		return 0;
//	}
//
//	printf("Allocated Memory\n");
//	for (int i = 0; i < n5; ++i) {
//		printf("%p\n", ptr5 + i);
//	}
//
//	n5 = 6;
//
//	ptr5 = realloc(ptr5, n5 * sizeof(int));
//
//	printf("Newly Allocated Memory\n");
//	for (int i = 0; i < n5; ++i) {
//		printf("%p\n", ptr5 + i);
//	}
//
//	free(ptr5);
//
//
//
//	return 0;
//}
//
//
