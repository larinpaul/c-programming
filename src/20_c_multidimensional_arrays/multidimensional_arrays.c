//// Arrays consists of elements
//// Multidimensional arrays also consist of elements
//// The only difference is,
//// the elements of multidimensional arrays are also arrays
//
//int main() {
//
//	int arr[2][3];
//
//	// initialization of multidimensional array
//	int arrInit[2][3] = { {1, 3, 5}, {2, 4, 5}};
//
//	int arrSingular[3] = {2,3,5};
//
//
//	// Access array elements
//	// Each element is associated with two indexes
//	int arrMulti[2][3] = { {1, 2, 5}, {2, 4, 6} };
//
//	printf("%d\n", arrMulti[0][0]); // 1
//	printf("%d\n", arrMulti[1][2]); // 6
//
//
//	// Change elements using array indexes
//	arrMulti[0][2] = 7;
//	arrMulti[1][1] = 8;
//
//	printf("%d\n", arrMulti[0][2]); // 7
//	printf("%d\n", arrMulti[1][1]); // 8
//
//
//	// Multidimensional array and for loop
//
//	// Similar to an array, we can access each element of a multidimensional array
//	// using a for loop
//
//	int arrFor[2][3] = { {1, 3, 5}, {2, 4, 6}};
//
//	for (int i = 0; i < 2; ++i) {
//		for (int j = 0; j < 3; ++j) {
//			printf("%d  ", arrFor[i][j]);
//		}
//	}
//
//	printf("\n");
//
//	for (int i = 0; i < 2; ++i) {
//		for (int j = 0; j < 3; ++j) {
//			printf("%d ", arrFor[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

