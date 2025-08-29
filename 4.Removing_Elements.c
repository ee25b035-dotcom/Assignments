#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	int index_removed = 4;
	//We want to remove the element in index 5
	char str_in[10] = "abcdefghi";
	size_t length = strlen(str_in);
	char* str_out = calloc(length- index_removed, sizeof(char));
	if (str_out == NULL) {
		printf("Memory allocation failed");
		exit(1);
	}
	//length of split array is 4 and 1
	//checking?=6-4=2, one for null terminator
	size_t split_length = length - index_removed;
		
	//Algorithm
	//From next element onwards, push it to the new string created
	//Because we are using pointer arithmetic, null doesn't matter

	*(str_in + index_removed) = '\0';

	printf("Copying started\n");
	for (int i = 0; i < index_removed; i++) {
		printf("%c", str_in[i]);
	}
	for (int i = 0; i <split_length-1;i++) {
		str_out[i] = str_in[i+index_removed+1];
		printf("%c", str_out[i]);
	}
	
	str_out[split_length - 1] = '\0';
	free(str_out);
	

}
