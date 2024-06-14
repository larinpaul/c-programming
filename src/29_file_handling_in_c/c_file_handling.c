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

	printf("Let's try and use a loop\n");
	if (fptr2 != NULL) {
		while (fgets(content2, 1000, fptr2)) {
			printf("%s\n", content2);
		}
	}
	else {
		printf("File Open Unsuccessful\n");
	}


	printf("Let's try and use a loop again\n");
	FILE* fptr3;

	fptr3 = fopen("textroot.txt", "r");

	char content3[1000];

	if (fptr3 != NULL) {
		while (fgets(content3, 1000, fptr3)) {
			printf("%s\n", content3);
		}
	}
	else {
		printf("File Open Unsuccessful");
	}


	// Closing file
	// Once the read operation is completed,
	// it is a good practice to close the file with fclose()
	fclose(fptr);
	fclose(fptr2);
	fclose(fptr3);


	FILE* fptr4;

	fptr4 = fopen("textroot.txt", "r");

	char content4[1000];

	if (fptr != NULL) {
		while (fgets(content4, 1000, fptr4)) {
			printf("%s", content4);
		}
	}
	else {
		printf("File Open Unsuccessful");
	}

	fclose(fptr4);
	printf("We have successfully closed our file! :) \n");


	// Write content to a file.
	FILE* fptr5;

	fptr5 = fopen("newFile.txt", "w"); // newfile.txt will be created :)
	// It was created, albeit from the second time or something...
	// Anyway, let's add content to the file! :)

	fputs("I Love C Programming\n", fptr5);
	fputs("C programming is awesome!", fptr5);

	fclose(fptr5);
	// Initially, the file did not exit. We created the file using fopen(), and then put the content with fputs()


	// Whenever we open the file in write mode,
	// all the content of the file will be erased.

	FILE* fptr6;

	fptr6 = fopen("newFile.txt", "w");

	fputs("New Message \n", fptr6);

	fclose(fptr6);
	printf("New Message is printed out and the file is closed... :)");


	return 0;
}


