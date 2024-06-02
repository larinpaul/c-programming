// datatype arrayName[arraySize];

// array size specifies the amount of data that can be stored in an array

// In C, you cannot change the data type of an array.
// int age[5];
// This array will always have the int type...

// assign a value to an array

int age[5] = {21, 29, 25, 32, 17};
// These values inside the curly brackets are called "array elements"
// we can also omit the size of the array
int ageToo[] = {21, 29, 25, 32, 17};
// In this case, the C compiler automatically determines the size of the array
// by counting the number of elements inside the array.

// We can have less than the limit, but not more
int ageTooSix[6] = {21, 29, 25, 32, 17}; // the last position will be filled with 0
int ageTooFive[5] = {21, 29, 25}; // in this example too, {21, 29, 25, 0, 0}


// Access Array Elements

// Array index...
// In C, each element of an array is associated with a number.

// We use the array index to access an element.

#include <stdio.h>

int main() {

	int age[5] = {21, 29, 25, 32, 17};

	printf("%d ", age[0]);
	printf("%d ", age[1]);
	printf("%d ", age[2]);
	printf("%d ", age[3]);
	printf("%d \n", age[4]);


	// We can also assign different elements individually
	// using an index number

	int ageToo[5];

	ageToo[0] = 21;
	ageToo[1] = 29;
	ageToo[2] = 25;
	ageToo[3] = 32;
	ageToo[4] = 17;

	printf("%d ", ageToo[0]);
	printf("%d ", ageToo[1]);
	printf("%d ", ageToo[2]);
	printf("%d ", ageToo[3]);
	printf("%d \n", ageToo[4]);

	// We can also assign user input to array values

	int ageInput[5];

	printf("Enter 5 input values: ");

	scanf("%d", &ageInput[0]);
	scanf("%d", &ageInput[1]);
	scanf("%d", &ageInput[2]);
	scanf("%d", &ageInput[3]);
	scanf("%d", &ageInput[4]);

	printf("%d ", ageInput[0]);
	printf("%d ", ageInput[1]);
	printf("%d ", ageInput[2]);
	printf("%d ", ageInput[3]);
	printf("%d \n", ageInput[4]);


	// Change array elements

	int ageChange[5] = {21, 29, 25, 32, 17};
	ageChange[2] = 226;
	printf("%d", ageChange[2]);


	// Loop and Array

	int ageFive[5];

	printf("Enter 5 input values: ");

	scanf("%d", &ageFive[0]);
	scanf("%d", &ageFive[1]);
	scanf("%d", &ageFive[2]);
	scanf("%d", &ageFive[3]);
	scanf("%d", &ageFive[4]);

	printf("%d ", ageFive[0]);
	printf("%d ", ageFive[1]);
	printf("%d ", ageFive[2]);
	printf("%d ", ageFive[3]);
	printf("%d \n", ageFive[4]);


	// But let's use Loops to do the same thing!

	int ageLoop[5];

	printf("Please enter 5 int values: ");

	for (int i = 0; i < 5; ++i) {
		scanf("%d", &ageLoop[i]); // 5\n5\n5\n5\n5\n
	}

	for (int i = 0; i < 5; ++i) {
		printf("%d ", ageLoop[i]); // 5 5 5 5 5
	}
	printf("\n");


	// Index Out of bounds Error

	// Here is something interesting...
	for (int i = 0; i < 5; ++i) {
		printf("%d ", ageLoop[i]); // 5 5 5 5 5
	} 	// This will work fine...
	printf("\n");

	// But this will not as expected... I will get 0. Or I might get a random number like 32765!
	for (int i = 0; i < 6; ++i) {
		printf("%d ", ageLoop[i]); // 5 5 5 5 5 5 0
	}
	// We should never try to access an element outside the array boundary...


	return 0;
}
