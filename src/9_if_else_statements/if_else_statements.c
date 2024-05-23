#include <stdio.h>
#include <stdbool.h>

int main() {

	bool test_condition = true;
	if (test_condition) {
		// body of if statement
	}

//	int age;
//	printf("Enter your age: ");
//	scanf("%d", &age);
//
//	if (age >= 18) {
//		printf("You are eligible to vote\n");
//	}
//	if (age >= 18)
//		printf("You are eligible to vote\n");
//
//	if (age < 18) {
//		printf("Sorry, you are not eligible to vote");
//	}


	// If with the else clause
	bool test_condition2 = true;
	if (test_condition2) {
		// statemenets inside if body
	}
	else {
		// statements inside else body
	}

	int age2 = 15;

	if (age2 >= 18) {
		printf("You are eligible to vote");
	}
//	if (age2 < 18) {
//		printf("Sorry, you are not eligible to vote");
//	}
	else {
		printf("Sorry, you are not eligible to vote\n");
	}


	// else if Statement
	bool test_condition3 = true;
	bool test_condition33 = true;

	if (test_condition3) {
		// statement1
	}
	else if (test_condition2) {
		// statement2
	}
	else {
		// statement3
	}

	printf("If else statement:\n");
	int age3 = 151; // -4 // 15 // 18 // 69

	if (age3 > 120) {
		printf("Invalid age\n");
	}

	else if (age3 < 0) {
		printf("Invalid age\n");
	}

	else if (age3 >= 18) {
		printf("You are eligible to vote\n");
	}

	else {
		printf("Sorry, you are not eligible to vote\n");
	}


	// The usage of the logical or || operator
	printf("Let's use the logical or, || \n");

	int age4 = 55;

	if (age4 > 120 || age4 < 0) {
		printf("Invalid age\n");
	}

	else if (age4 >= 18) {
		printf("You are eligible to vote\n");
	}

	else {
		printf("You are not eligible to vote\n");
	}

	// If the body of the if else block has only one statement, like this,
	int age5 = 50;
	if (age5 >= 18) // We can remove the curly braces here
		printf("You are eligible to vote\n");

	return 0;
}
