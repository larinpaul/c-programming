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


	// Read File Content

	FILE* fptr2;

	fptr2 = fopen("textroot.txt", "r");

	char content2[1000];

	if (fptr2 != NULL) {
		fgets(content2, 1000, fptr2);
		printf("%s\n", content2); // As we can see, only the first line printed out
	}	// "This is the text file." // If we want to print out all the lines, we need a loop
	else {
		printf("File Open Unsuccessful\n");
	}


	return 0;
}


