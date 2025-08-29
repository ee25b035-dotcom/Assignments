#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char str_in[6] = "abcde";
	char* str_out = calloc(strlen(str_in)+1, sizeof(char));
	int length = strlen(str_in);
	//length is 6
	for (int i = 0; i < length; i++) {
		//We want this: "abcde\0" "edcba\0"
		*(str_out + i) = str_in[length-1 - i];

	}
	//Relying on the calloc to give null terminator is a bad practice??
	*(str_out + 5) = '\0';
	//Assigning null terminator at last element
	for (int i = 0; i < length; i++) {
		printf("%c", *(str_out + i));
	}
}