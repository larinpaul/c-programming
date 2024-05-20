#include <stdio.h>
#include <stdbool.h>

int main() {

	bool value1 = true;
	bool value2 = false;

	printf("%d ", value1);
	printf(" %d\n", value2);


	// Greater than operator
	bool value3 = (5 > 9); // 0

	printf("%d \n", value3);


	// Less than operator
	bool value4 = (5 < 9); // 1
	bool value44 = (9 < 9); // 0


	printf("%d \n", value4); // 1
	printf("%d \n", value44); // 0


	// Equal to operator
	bool value5 = (6 == 9); //  0
	bool value55 = (9 == 9); // 1


	// Not equal to operator
	bool value6 = (9 != 6); // 1


	// Counpound comparator operators:
	// Greater or equal
	bool value7 = (9 >= 6); // 1
	bool value77 = (9 >= 6); // 1

	// Less or equals
	bool value777 = (6 <= 9); // 1
	// we can also use it with floating point numbers
	bool value7777 = (9.34 <= 6.87); // 0


	// Comparison between variables
	int num1 = 9;
	int num2 = 6;

	bool value8 = num1 > num2;
	bool value88 = num1 > 6;

	printf("%d\n", value8); // 1
	printf("%d\n", value88); // 1


	// Logical operators
	// Logical operators are used with boolean expressions
	// to perform logical operations
	// && - AND
	// || - OR
	// ! - NOT

	// AND operator &&
	int age = 18;
	double height = 6.3;

	bool result = (age >= 18) && (height > 6.0); // 1

	printf("%d\n", result); // 1

	// OR operator ||
	// Returns 1 if at least one of the the operands is true
	bool result1 = (age >= 21) || (height > 6.0); // 1


	// Unlike AND and OR,
	// the NOT operator is used with only one boolean expression
	// We use the exclamation mark ! as a the NOT operator
	// The NOT operator simply reverses the result of a boolean expression

	int age2 = 16;

	bool result2 = !(age2 >= 18); // 1

	printf("%d\n", result2); // 1

	bool result22 = !(age2 <= 18); // 1 -> 0

	printf("%d\n", result22); // 0


	return 0;
}




