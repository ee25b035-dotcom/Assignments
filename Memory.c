#include <stdio.h>
int main(void) {
	int value = 10;
	int* ptr = &value;
	printf("%d\n", value);
	printf("%p\n", &value);
	printf("%d\n", *ptr);
	*ptr = 20;
	//Modifying the value at pointer will change the value of 'value' itself
	//this is because the computer looks for the number of 'value' at a specific location only
	printf("%d\n", value);
	printf("%p\n", &value);
	printf("%d\n", *ptr);
	return 0;
}