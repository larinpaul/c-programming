//#include <stdio.h>
//
//int main() {
//	printf("Hello World\n"); // "Hello World" is a stirng which consists of characters 'H' 'e' 'l' 'l' 'o' ' ' 'W' 'o' 'r' 'l' 'd' '\n'
//
//	char str[] = "Programiz str[]"; // String in C is an array of characters...
//	char strToo[] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', 'i', 'z'};
//	// But remember that in C, when you use a character array without a null-terminating character,
//	// it's not a proper string.
//	// The `%s` format specifier in `printf` expects a null-terminated string,
//	// so it will keep printing chracters until it encounters a null character.
//
//	printf("%s\n", str);// By the way compiler always adds \0 at the end of each string...
//	printf("%s\n", strToo); // Hm, weird... ProgramizProgramiz ...
//	printf("%s\0", strToo); // Nah, still ProgramizProgramiz...
//	printf("\n");
//	char strWithZero[] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', 'i', 'z', '\0'};
//	printf("strWithZero \n");
//	printf("%s\n", strWithZero); // Okay, now it seems to have worked...
//
//
//	// String Input
//	// We can use scanf input to get a String input from the user...
//
//	char strNotInput[] = "Programiz strNotInput";
//
//	printf("%s\n", strNotInput);
//
//	// Now let's just declare an array of charcters,
//	// without initializing the string
//
//////	char strArr[20];
//////
//////	printf("Enter your name: \n");
//////
//////	scanf("%s", strArr);
//////	// But this way, you won't be able to get something like "Padma Manandhar"
//////	printf("Your name is: %s\n", strArr);
////	// for some reason, fgets works on its own...
////	// but it won't wokr if I don't comment out the one above...
////
////	// To be able to get something like "Name Surname",
////	// we need fgets.
////
////	char strFullName[20];
////
////	printf("Enter your full name: \n");
////
////	fgets(strFullName, sizeof(strFullName), stdin);
////
////	printf("%s", strFullName);
//
//
//	// Access Characters of a String
//	char strToAccess[] = "Programiz";
//	// now, to access the characters, we can use
//	// stringName[index]
//
//	printf("%c\n", strToAccess[0]); // P
//
//	// Similarly, we can access other elements easily
//	printf("%c\n", strToAccess[1]); // r
//	printf("%c\n", strToAccess[2]); // o
//	printf("%c\n", strToAccess[3]); // g
//
//
//	// Change Characters of String
//	// We can also change the character of a string...
//
//	// Now let's try to change Programiz to PrOgramiz...
//
//	strToAccess[2] = 'O';
//	strToAccess[4] = 'R';
//
//	printf("%s", strToAccess); // PrOgRamiz
//
//
//
//	return 0;
//}
