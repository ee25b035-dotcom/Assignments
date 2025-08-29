#include <stdio.h>
#include <stdlib.h>
int main() {
	int length = 5;
	//Initialising new array named array with 5 elements using calloc
	int* array = calloc(length, sizeof(int));
	if (array == NULL) {
		printf("Memory allocation failure");
		exit(1);
	}
	for (int i = 0; i < length; i++) {
		*(array + i) = i + 1;
	}
	int* new_array = realloc(array, 10*sizeof(int));
	//Errors in allocation
	if (new_array == NULL) {
		printf("Memory allocation error");
		exit(1);
	}
	//Assigning values in array
	for (int i = 5; i < length + 5; i++) {
		*(new_array + i) = i + 1;
	}
	//Freeing new_array to avoid memory leaks
	for (int i = 0; i < 10; i++) {
		printf("%d\n", new_array[i]);
	}
	free(new_array);
	new_array = NULL;
}