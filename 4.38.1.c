#include <stdio.h>
#include<string.h>
#include <stdlib.h>
//ALgorithm is to use the previous, removing elements and replace all elements at odd indices by the \0
int main(void) {
	char array[13] = "abcdefghijkl";
	printf("Started hiding elements\n");
	size_t initial_length = strlen(array);
	char* final_array = calloc(initial_length / 2, sizeof(char));
	if (final_array == NULL) {
		printf("Memory allocation failed");
		exit(0);
	}
	int j = 0;
	size_t final_length = initial_length / 2;
	//For building the new array
	for (int i = 0; i < initial_length;i+=2) {
		*(array + i) = '\0';
	}
	for (int i = 0; i < initial_length; i++) {
		if (array[i] != '\0') {
			*(final_array + j) = array[i];
			j++;
		}
		printf("%c\n", array[i]);	
	}
	for (int i = 0; i < final_length; i++) {
		printf("%c", final_array[i]);
	}
}
