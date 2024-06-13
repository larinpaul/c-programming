// Let's learn to perform file opeartions in C!

// In C, there are usually three steps involved when working with files
// 1. Open a file
// 2. Perform file operation
// 3. Close the file


// Open a file

// We use a file pointer to work with the file
// FILE* fptr;

// Once we have the file pointer,
// we must use the fopen function to open the file

// Let's assume we have text.txt file

//FILE* fptr;
//
//fptr = fopen("test.txt", "r");
//// "r" - read mode, (be sure the file is already present beforehand!)

#include <stdio.h>

int main() {

	FILE* fptr;

	fptr = fopen("text2.txt", "r");

	if (fptr != NULL) {
		printf("File Open Successful\n");
	}
	else {
		printf("File Open Unsuccessful\n");
	}

	fptr = fopen("text.txt", "r");

	if (fptr != NULL) {
		printf("File Open Successfully!\n");
	}
	else {
		printf("File didn't open...\n");
	}

	fptr = fopen("test.txt", "r");

	if (fptr != NULL) {
		printf("File Open Successfully!\n");
	}
	else {
		printf("File didn't open...\n");
	}

	fptr = fopen("textroot.txt", "r");

	if (fptr != NULL) {
		printf("File Open Successfully!\n");
	}
	else {
		printf("File didn't open...\n");
	}

//	File Open Unsuccessful
//	File didn't open...
//	File didn't open...
//	File Open Successfully!

	fptr = fopen("src/test.txt", "r");

	if (fptr != NULL) {
		printf("File Open Successfully!\n");
	}
	else {
		printf("File didn't open...\n");
	}
	//	File Open Successfully!



	return 0;
}


