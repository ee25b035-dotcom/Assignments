#include <stdio.h>
#include <stdlib.h>
int main() {
	void* ptr;
	//void pointer is a pointer whose type is not known
	//It is useful for flexibility
	//It can't be read from without writing to it and giving it a type
	//For example:
	int i = 100;
	char* ptr1;
	int i1 = 1345;
	ptr = (int*)&i;
	//Casting is telling compiler to treat one type of variable as another type of variable
	//It is useful to assign types to arrays
	//It is also useful to read integers in a different manner
	ptr1 = (char*)&i1;
	printf("%c\n", *ptr1);
	//Format specifier is %c for characters and %s for array of characters which are strings
	printf("%c\n", *(ptr1 +1));
	printf("%p\n", ptr1);
}