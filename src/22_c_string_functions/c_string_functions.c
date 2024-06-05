#include <stdio.h>
#include <string.h>

int main() {

	char language[] = "C Programming";

	printf("%s", language); // C Programming // As you can see, we have successfully printed the statement
	printf("\n");


	// Now let's go to strlen() function

	// Let's suppose we are trying to find the length of the string

	printf("\nLength: %zu", strlen(language)); // Length: 13
	printf("\n");
	int length = strlen(language);
	printf("%d", length);
	printf("\n");
	printf("%d", strlen(language));
	printf("\n");


	// strcpy() function
	// It's used to copy one string to another

	char food[] = "Pizza";

	char bestFood[strlen(food)];
	   // destination // source
	strcpy(bestFood, food);

	printf("%s", bestFood);
	printf("\n");


	// strcat() function
	// It's used to concatenate two strings together

	char text1[] = "Hey ";
	char text2[] = "How are you?";

	strcat(text1, text2);

	printf("%s", text1); // Hey How are you?
	printf("\n");


	// strcmp() function
	// It's used to compare two strings.
	// It returns 0 if both the strings are equal
	// If the strings are not equal,
	// it returns the ASCII value difference between the characters at that position.
	// If the first character is greater in the first string, the function returns a positive value.
	// If the first characters that differs is greater in the second string, the functions returns a negative value.
	// It doesn't return a random value if the strings are not equal.
	// It compares the two strings character by character until it finds a diffrence,
	// and then returns the ASCII value difference between the characters at that position.

	char text11[] = "abcd";
	char text22[] = "efgh";
	char text33[] = "bbcd";
	char text44[] = "aacd";
	char text55[] = "abcd";

	int result1122 = strcmp(text11, text22);
	int result1133 = strcmp(text11, text33);
	int result1144 = strcmp(text11, text44);
	int result1155 = strcmp(text11, text55);

	printf("%d", result1122); // -4
	printf("\n");
	printf("%d", result1133); // -1
	printf("\n");
	printf("%d", result1144); // 1
	printf("\n");
	printf("%d", result1155); // 0
	printf("\n");

	// Apart from these four, there are dozens of String functions

	return 0;
}






