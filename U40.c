#include <stdio.h>
int main(void) {
	//First declare variables to store the present year and your age
	//Or see if you can get it from your computer
	//Then perform and print the subtraction
	printf("Please enter the present year\n");
	int year;
	scanf_s("%d", &year);
	printf("Please enter your age\n");
	int age;
	scanf_s("%d", &age);
	printf("You were born in %d", year - age);
}