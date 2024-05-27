//for (int i = 0; testExpression; updateExpression) {
//	// code inside the for loop
//}

//for (int i = 0; i < 5; i + 1) {
//	// code inside the for loop;
//}

#include <stdio.h>

int main() {

	for (int i = 0; i < 10; i++) {
		printf("%d ", i);
	}

	for (int i = 0; i <= 20; i++) {
		printf("Emergency Condition\n");
	}


	// Sum of numbers 1 to 100
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum = sum + i;
	}
	printf("%d ", sum); // 5050


	// Sum of even numbers
	int sum2 = 0;
	for (int i = 2; i <= 100; i = i+2) {
		sum2 = sum2 + i;
	}

	printf("%d ", sum2); // 2550


	return 0;
}





