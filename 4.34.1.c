#include<stdio.h>
//Probably we can say simplest abstraction of string is that it is an array of characters, but specially
//Terminated by a null operator
//Calloc here is quite useful
#include<stdlib.h>
int main(void) {
	char str_in[6] = "abcde";
	int length = sizeof(str_in) / sizeof(char);
	char *str_out = calloc(sizeof(str_in) / sizeof(char), sizeof(char));
	//Remember that both contain 6 items in them, for knowing where to terminate
	//It seems after complete reversal, swapping the null terminator to the right place doesn't work
	
	for (int i = 0; i < length; i++) {
		*(str_out + i) = str_in[5 - i];
	}
	char temp = *(str_out);
	*(str_out) = *(str_out + 5);
	*(str_out + 5) = temp;
	for (int i = 0; i < length; i++) {
		printf("%c", *(str_out + i));
	}
	free(str_out);
}
//'abcde0\'->'edcba0\'