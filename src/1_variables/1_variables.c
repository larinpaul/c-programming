#include <stdio.h>

int main() {

	int age = 25;
	printf("Age: %d", age);

	age = 31;
	printf("\nNew age: %d", age);

	int firstNumber = 33;
	printf("firstNumber = %d", firstNumber);

	int secondNumber = firstNumber;
	printf("\nsecondNumber = %d", secondNumber);



	// Multiple variables in a single line
	int variable1, variable2 = 25;
	// two variables are created, and the value of variable2 is 25
	printf("\nVariable1: %d", variable1); // ‘variable1’ is used uninitialized [-Wuninitialized]
	// If we don't have a value, an unpedictable value could be inserted
	// however in our compiler, it is zero...
	printf("\nVariable3: %d", variable2);

	int var1, var2 = 22, var3 = 33;
	printf("\nVar1: %d", var1); // ‘var1’ is used uninitialized [-Wuninitialized]
	printf("\nVar2: %d", var2);
	printf("\nVar3: %d", var3);



	// Variable naming conventions
	int myAge, firstNumber, lightSpeed;



	return 0;
}
