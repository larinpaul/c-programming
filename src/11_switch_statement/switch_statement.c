//#include <stdio.h>
//
//
//
//int main() {
//
//////	switch(variable/expression) {
//////		case value1:
//////			// body of case1
//////			break;
//////
//////		case value2:
//////			// body of case 2
//////			break;
//////
//////		case valueN:
//////			// body of case N
//////			break;
//////
//////		default:
//////			// body of default
//////	}
////
////
//////	int number;
//////	printf("Enter the number between 1 to 7: ");
//////	scanf("%d", &number);
//////
//////	switch (number) {
//////		case 1:
//////		printf("Sunday");
//////		break;
//////
//////		case 2:
//////		printf("Monday");
//////		break;
//////
//////		case 3:
//////		printf("Tuesday");
//////		break;
//////
//////		case 4:
//////		printf("Wednesday");
//////		break;
//////
//////		case 5:
//////		printf("Thursday");
//////		break;
//////
//////		case 6:
//////		printf("Friday");
//////		break;
//////
//////		case 7:
//////		printf("Saturday");
//////		break;
//////
//////		default:
//////		printf("Invalid Number");
//////	}
////
////
////		int number;
////		printf("Enter the number between 1 to 7: \n");
////		scanf("%d", &number);
////
////		switch (number) {
////			case 1:
////			printf("Sunday");
////
////
////			case 2:
////			printf("Monday");
////
////
////			case 3:
////			printf("Tuesday");
////
////
////			case 4:
////			printf("Wednesday");
////
////			case 5:
////			printf("Thursday");
////
////
////			case 6:
////			printf("Friday");
////
////
////			case 7:
////			printf("Saturday");
////
////
////			default:
////			printf("Invalid Number\n");
////			// If we remove the break statement,
////			// THEN EVERYTHING WILL BE PRINTEND OUT...
//////			Enter the number between 1 to 7: 5
//////			ThursdayFridaySaturdayInvalid Number
////		}
////
////
////		// In some cases, we can omit the print statement,
////		// for example if we want to group some cases together
////
////		int number2;
////		printf("Enter a number between 1 and 7: \n");
////		scanf("%d", &number2);
////
////		switch (number2) {
////		case 2:
////		case 3:
////		case 4:
////		case 5:
////		case 6:
////			printf("Weekday\n");
////			break;
////
////		case 1:
////		case 7:
////			printf("Weekend\n");
////			break;
////
////		default:
////			printf("Invalid Number\n");
////		}
//
//
//	// Now let's use a switch statement to create a simple calculator...
//	char operator;
//	printf("Choose an operator ['+', '-', '*', '/']: \n");
//	scanf("%c", &operator);
//
//	double num1, num2;
//
//	printf("Enter first number: \n");
//	scanf("%lf", &num1);
//
//	printf("Enter second number: \n");
//	scanf("%lf", &num2);
//
//	double result;
//
//	switch (operator) {
//	case '+':
//		result = num1 + num2;
//		break;
//	case '/':
//		result = num1 / num2;
//		break;
//	case '-':
//		result = num1 - num2;
//		break;
//	case '*':
//		result = num1 * num2;
//		break;
//	}
//
//	printf("Result: %lf\n", result);
//
//	return 0;
//}
