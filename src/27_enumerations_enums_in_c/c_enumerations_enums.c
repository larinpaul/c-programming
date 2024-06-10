//// In C programming, an enum is a type that has a fixed set of values
//
//#include <stdio.h>
//
//// This enum has four types:
//enum Size {
//	Small,
//	Medium,
//	Large,
//	ExtraLarge
//};
//// They are called enum constants
//
//// Let's create a variable of the enum type
//// This variable can now store one of four values
//enum Size shoeSizeTest;
////shoeSize = Small; // gives me compilation error but okay... Let's go on...
//
//
//// Integral constants
//// In C, all enum constants are represented as an integral set of values
//// known as integral constants
//enum SizeConstants {
//	SmallToo, // represented as 0
//	MediumToo, // represented as 1
//	LargeToo, // represented as 2
//	ExtraLargeToo, // represented as 3
//};
//
//int main() {
//
//	enum Size shoeSize;
//
//	shoeSize = ExtraLarge;
//	printf("%d\n", shoeSize); // 3
//
//	shoeSize = Small;
//	printf("%d\n", shoeSize); // 0
//
//
//	// Change value of Integral Constants
//
//	// The default values of integral constants would be like this:
//	enum SizeDefault {
//		Small = 0,
//		Medium = 1,
//		Large = 2,
//		ExtraLarge = 3
//	};
//	// But what if we want
//	// 27 for Small
//	// 31 for Medium
//	// 35 for Large
//	// 40 for ExtraLarge
//	// In such situations, we can change the values of integral constants
//
//	enum SizeAssigned {
//		SmallAssigned = 27,
//		MediumAssigned = 31,
//		LargeAssigned = 35,
//		ExtraLargeAssigned = 40
//	};
//
//	enum SizeAssigned shoeSize1 = SmallAssigned;
//	enum SizeAssigned shoeSize2 = MediumAssigned;
//	enum SizeAssigned shoeSize3 = LargeAssigned;
//	enum SizeAssigned shoeSize4 = ExtraLargeAssigned;
//
//	printf("%d\n", shoeSize1); // 27
//	printf("%d\n", shoeSize2); // 31
//	printf("%d\n", shoeSize3); // 35
//	printf("%d\n", shoeSize4); // 40
//
//
//	// A small tip:
//	// we have been using this format to create an enum variable:
//	// enum Size shoeSize
//	// however we can also create enum variables while defining an enum
//	enum SizeVariables {
//		SmallVal,
//		MediumVal,
//		LargeVal,
//		ExtraLargeVal
//	} shoeSizeVariable;
//
//	shoeSizeVariable = Medium;
//	printf("%d\n", shoeSizeVariable); // 1
//
//
//	return 0;
//}
