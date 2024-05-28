//#include <stdio.h>
//
//int main() {
//
//	// break statement
//
//	for (int i = 1; i <= 5; i++) {
//		printf("%d\n", i); // Only 1 will be printed out
//		break;
//		printf("After the Break"); // This will not be printed out
//	}
//
//	for (int i = 1; i <= 5; i++) {
//
//		if (i == 3) {
//			break; // only 1 and 2 will be printed out
//		}
//
//		printf("%d\n", i); // only 1 and 2 will be printed out
//	}
//
//
////	// Break with while
////
////	while (1) { // As we know 1, is the synonym for true basically
////		int number;
////		printf("Enter a number: \n");
////		scanf("%d", &number);
////
////		if (number < 0) {
////			break; //Break if number is less than 0
////		}
////		printf("%d\n", number);
////	}
//
//
//	// Continue Statement
//	// Unlike break, the continue statement skips an iteration of a loop and goes to the next iteration
//
//	// This will print out 1 to 5 excluding 3
//	for (int i = 1; i <= 5; i++) {
//
//		if (i == 3) {
//			continue;
//		}
//
//		printf("%d\n", i);
//	}
//
//
//	// Break and Continue
//	while (1) {
//		int number3;
//		printf("Enter a number: \n");
//		scanf("%d", &number3);
//
//		if (number3 <= 0) {
//			break;
//		}
//
//		if ((number3 % 2) != 0) {
//			continue;
//		}
//
//		printf("%d\n", number3);
//	}
//
//
//	return 0;
//}
//
//
//
//
//
//
//
//
