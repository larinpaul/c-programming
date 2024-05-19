#include <stdio.h>

int main() {

	int a = 5;
	int b = 9;

	int result = a + b;

	printf("%d\n", result); // 14


	char a2 = '5';
	char b2 = 9;

	int result2 = a2 + b2; // Code runs without error, but we get 62!

	printf("%d\n", result2); // 62
	// the char is converted into ASCII value, and '5' is 53


	double a3 = 5.67;
	int b3 = 9;

	int result3 = a3 + b3; // 5.67 is converted to 5...

	printf("%d\n", result3); // 14

	double result33 = a3 + b3; // 14.670000
	// Int is converted into double
	// You may be wondering, why not double into int...
	// Well, there is a hierarchy...

	// long double
	// double
	// float
	// long
	// int
	// short
	// char

	// In this hierarchy, the type on the lower position
	// is converted into the type on the higher position
	// For example, char is converted into int, and int is converted into double
	// But if we specifically assign a double to an int, like here:
//	double a3 = 5.67;
//	int b3 = 9;
//	int result3 = a3 + b3; // 5.67 is converted to 5...
	// Then, as you can see, the result gets truncated...

	printf("%lf\n", result33); // 14.670000
	printf("%d\n", result33); // -67906912


	int a4 = 5.67;

	printf("%d\n", a4); // 5 // As you can see, some information is lost


	// We can also forcefully convert one data type into another
	// This type of conversion is called explicit type conversion

	double a5 = 5.67;

	int b5 = 9;

	double result5 = (int) a5 + b5;

	printf("%d\n", result5); // 1439445654
	printf("%lf\n", result5); // 14.000000

	int result55 = (int) a5 + b5;

	printf("%d\n", result55); // 14
	printf("%lf\n", result55); // 14.000000


	int a6 = 9;

	int b6 = 2;

	double result6 = a6 / b6; // this will give the result of 4.000000...

	printf("%lf\n", result6); // 4.000000

	// That is why we need explicit conversion here...

	double result66 = (double) a6 / b6; // And here we get 4.500000 thanks to explicit conversion...
	// This is because the variable a6 is of DOUBLE type!
	// yes, = (double)a6 / b6; !
	double result666 = ((double)a6) / b6; // 4.500000

	printf("%lf\n", result66); // 4.500000
	printf("%lf\n", result666); // 4.500000


	return 0;
}
