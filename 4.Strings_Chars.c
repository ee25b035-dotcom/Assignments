#include <string.h>
//Strings are arrays of characters
//We will practice declaring strings and cycling thorugh them
#include <stdio.h>
#include<stdlib.h>
int main(void) {
	char str[6] = "abcde";
	char* ptr = str;
	int length = sizeof(str) / sizeof(char);
	for (int i = 0; i < length; i++) {
		printf("%c\n", *(str + i));
		//This is how you cycle through the string, right
	}
	//Every string has a null terminator in the end, which must be stored in the string
	// This means that you should always put +1 there
	//Converting into a list
	printf("Allocting memory..");
	char* array = calloc(length+1, sizeof(char));
	for (int i = 0; i < length; i++) {
		*(array + i) = *(ptr + i);
	}
	printf("Copying complete");
	free(array);
	
}