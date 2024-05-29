////// Syntax of a function
////returnType functionName() {
////	...
////	...
////}
//
//
//#include <stdio.h>
//
//void greet() {
//	printf("Good Morning!\n");
//}
//
//// In C, a function prototype is a declaration of a function
//
//// It provides information about function name, parameters, and return types
//// However, it does not include the body
//// Let's see an example:
//
//// Here, the information about the function is provided to the compiler
//// before the function is defined, only declared
//
//int addNumber(int number1, int number2);
//
//// Why use function prototypes in C?
//// 1. Separation of declaration and definition.
//// By separating the function prototype from the function definition,
//// we can declare the function in a header file (e.g., `mylib.h`)
//// and define it in a separate implementation file (e.g. `mylib.c`).
//// This allows us to hide the implementation details
//// from the users of the library and provide a clear interface
//// 2. Forward declaration.
//// When we need to use a function before it's defined.
//// This is useful when we have mutually recursive functions,
//// or when we need to use a function in a header file before its definition.
//// 3. Documentation and interface
//// 4. Error checking.
//// By providing a function prototype, the compiler can check
//// the correctness of function calls, ensuring that the number
//// and types of arguments match the function's signature.
//// 5. Legacy code and compatibility.
//// Function prototypes are still necessary when working with legacy code
//// or when maintaining compatibility with older C standards.
//
//// Some functions, like print(), are defined in stdio.h
//// that is why we need to write #include <stdio.h> to use them
//// Similarly, sqrt() is another standard library function,
//// but it comes from the math.h file...
//
//#include <math.h>
//
//// Main is the first function executed by the compiler
//// so every c program includes a main() function
//
//int main() {
//
//	greet();
//	printf("After Function Call\n");
//	greet();
//	greet();
//	greetToo();
//
//	calculateSquare(4); // Square of 4 is 16
//
//	addNumbersVoid(8, 9); // Sum of 8 and 9 is 17
//
//	int result = addNumbers(8, 9);
//	printf("Result = %d", result); // Result = 17
//
//
//	sqrt(4); // Returns a square root of a number as a floating point value
//
//	float result2 = sqrt(4); //
//	printf("The square root of 4 is %d, yes!\n", result2); // using %d accidentally, so will print something different...
//	printf("The square root of 4 is %f, yes!\n", result2); // correctly using %f
//	printf("The square root of 4 is %lf, yes!\n", result2); // using %lf but still seems to work...
//	printf("The square root of 4 with two digits precision is %.2f, yes!\n", result2);
//
//	return 0;
//}
//
//void greetToo() {
//	printf("Another Greeting! \n");
//}
//
//void calculateSquare(int number) {
//	int square = number * number;
//	printf("Square of %d is %d\n", number, square);
//}
//
//void addNumbersVoid(int number1,int number2) {
//	int sum = number1 + number2;
//	printf("Sum of %d and %d is %d\n", number1, number2, sum);
//}
//
//// In C, you can indeed declare and define a function in a single step,
//// which is known as FUNCTION DEFINITION.
//// This is different from FUNCTION PROTOTOYPE,
//// which only declares function, without defining it.
//
//int addNumbers(int number1, int number2) {
//	int sum = number1 + number2;
//	return sum;
//	printf("After Return Statement\n"); // This will not be printed out
//}
