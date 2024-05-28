#include <stdio.h>

int main() {

	for (int i = 1; i <= 5; i++) {
		printf("%d\n", i); // Only 1 will be printed out
		break;
		printf("After the Break"); // This will not be printed out
	}

	for (int i = 1; i <= 5; i++) {

		if (i == 3) {
			break; // only 1 and 2 will be printed out
		}

		printf("%d\n", i); // only 1 and 2 will be printed out

	}






	return 0;
}








