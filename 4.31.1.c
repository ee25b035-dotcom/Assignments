#include<stdio.h>
#include <stdlib.h>
int main(void) {
	char str_in[6] = "ttttt";
	char* characters = calloc(sizeof(str_in)/sizeof(char), sizeof(char));
	int* frequency = calloc(sizeof(str_in)/sizeof(char), sizeof(int));
	//The best choice for frequency is calloc as it sets all emory values to 0!


	//Function to detect number of repeats
	//Must add +1 every time it detects a new one
	//Must not scan the same element again

	for (int i = 0; i <6; i++) {
		char read_element = str_in[i];
		if (unique(characters, &read_element, 5)) {
			*(characters + i) = read_element;
		}
		//Now I think characters will have a list of all the unique elements	

	}
	for (int i = 0; i < 6; i++) {
		int read_times = 0;
		//We now have no problem because we are reading only characters
		for (int j = 0; j < 5; j++) {
			if (characters[i] == characters[j]) {
				read_times += 1;
				*(frequency + i) = read_times;
			}
		}

	}
	for (int i = 0; i < 6; i++) {
		printf("%d,", *(frequency + i));
	}
	free(characters);
	free(frequency);
}

int unique(char* a, char* b, int length) {
	//a is the array of numbers and b is the read_element
	int is_Unique = 1;
	for (int i = 0; i < length && is_Unique; i++) {
		//compare the given element with all the elements in numbers array, if unique, return 1 as 1 is true
		// else 0 because else is false
		if (*(a + i) == *b) {
			is_Unique = 0;
		}
	}
	return is_Unique;
}
//Problems:
//The presence of 0s makes it useless for printing unique elements, but what if I made my counter work differently??
//The other thing is this ensures it always has the same number of elements