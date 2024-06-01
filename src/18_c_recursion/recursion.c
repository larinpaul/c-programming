// A function that calls itself:
// a recursive function

//// This might cause an infinite function call...
//void recurse() {
//	...
//	recurse();
//	...
//}
//
//int main() {
//	...
//	recurse();
//	...
//	return 0
//}

//// But we can fix that! :)
//void recurse() {
//	...
//	if (condition) {
//		....
//	}
//	else {
//		recurse();
//	}
//	...
//}
//
//int main() {
//	...
//	recurse();
//	....
//	return 0;
//}


// A program that computes the sum of n natural numbers

#include <stdio.h>
int sum(int n);

int main() {
	int number, result;

	printf("Enter a positive integer: ");
	scanf("%d", &number);

	result = sum(number);

	printf("sum = %d", result);
	return 0;
}

int sum(int n) {
	if (n != 0) {
		// sum() function calls itself
		return n + sum(n-1);
	}
	else {
		return n;
	}
}

