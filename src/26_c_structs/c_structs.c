// A Struct is a collection of variables under a single name.

#include <stdio.h>


struct Person {
	double salary;
	int age;
} person5, person6; // these are variables

// We can create variables of the struct Person type,
// just like we can create variables of the int and other types...


// typedef in struct

// When creating the struct variables,
// we have to use both the struct keyword and the name of the struct
// struct Person person1
// Instead, we can use an alias,
// and typedef keyword allows us to use an alias for a struct

typedef struct PersonToo {
	double salary;
	int age;
} persontoo; // this is an alias

int main() {

	struct Person person1;
	struct Person person2;

	person1.age = 25;
	person1.salary = 4321.78;

	printf("Age of person1: %d\n", person1.age);
	printf("Salary of person1: %.2lf\n", person1.salary);


	// We can create as many struct variables as we want
	// And struct members

	person2.age = 31;
	person2.salary = 78943.2;
	printf("\nAge of person2: %d\n", person2.age);
	printf("Salary of person2: %.2lf\n", person2.salary);


	// In the examples above, we are creating a variable in one line
	// and assigning the values in other lines.
	// Instead, we can create variables and assign values to them in the same line

	struct Person person3 = {.age = 25, .salary = 4321.78 };
	struct Person person4 = {.age = 31, .salary = 78943.2 };
	printf("\nAge of person3: %d\n", person3.age);
	printf("Salary of person3: %.2lf\n", person3.salary);
	printf("\nAge of person4: %d\n", person4.age);
	printf("Salary of person4: %.2lf\n", person4.salary);


	// Also we can create struct variables while defining the struct

	person5.age = 31;
	person5.salary = 78943.2;
	printf("\nAge of person5: %d\n", person5.age);
	printf("Salary of person5: %.2lf\n", person5.salary);

	person6.age = 31;
	person6.salary = 78943.2;
	printf("\nAge of person6: %d\n", person6.age);
	printf("Salary of person6: %.2lf\n", person6.salary);


	// typedef in struct

	// When creating the struct variables,
	// we have to use both the struct keyword and the name of the struct
	// struct Person person1
	// Instead, we can use an alias,
	// and typedef keyword allows us to use an alias for a struct
	persontoo person11;

	person11.age = 25;
	person11.salary = 4321.78;
	printf("\nAge of person11: %d\n", person11.age);
	printf("Salary of person11: %.2lf\n", person11.salary);


	return 0;
}



