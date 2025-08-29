#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char str_in[5] = "aeiou";
	int length_in = sizeof(str_in) / sizeof(char);
	//Input string
	char array[5] = { 'a','e','i','o','u' };
	int vowels = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < length_in; j++) {
			if (str_in[j] == array[i]){
				vowels++;
			}
		}
	}
	printf("%d", vowels);
}