#include <stdio.h>
#include <stdlib.h>
int main(void) {
	//First we will create an array, then we will increase the element number
	//Later we will decrease and see what happenst
	//The power of getting a pointer is that basically anything is rewritable?
	int* numbers;
	numbers = (int*)malloc(sizeof(int) * 3);
	if (numbers == NULL) {
		printf("Unable to allocate memory to array");
		;
	}
	for (int i = 0; i < 3; i++) {
		numbers[i] = i + 1;
		printf("%d\n", numbers[i]);
	}
	int* new_ptr;
	new_ptr = (int*)realloc(numbers, sizeof(int) * 7);
	if (new_ptr == NULL) {
		printf("Failure");
		return 1;
	}
	for (int i = 0; i < 7; i++) {
		new_ptr[i] = i + 3;
		printf("%d\n", new_ptr[i]);
	}

	
	return 0;
}