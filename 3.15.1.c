#include<stdio.h>
#include <stdlib.h>
int main(void) {
	int arrays[5] = {0,0,0,0,0};
	int* numbers = calloc(5, sizeof(int));
	int* frequency = calloc(5, sizeof(int));
	//The best choice for frequency is calloc as it sets all emory values to 0!
	

	//Function to detect number of repeats
	//Must add +1 every time it detects a new one
	//Must not scan the same element again
	
	for (int i = 0; i < 5; i++) {
		int read_element = arrays[i];
		if (unique(numbers,&read_element,5)) {
			*(numbers + i) = read_element;
		}
	//Now I think numbers will have a list of all the unique elements	
		
	}
	for (int i = 0; i < 5; i++) {
		int read_times = 0;
		//We have the problem of zeroes only, so we will actually start counting from 0
		for (int j = 0; j < 5; j++) {
			if (numbers[i] == arrays[j]) {
				read_times += 1;
				*(frequency + i) = read_times;
			}
		}
		
	}
	for (int i = 0; i < 5; i++) {
		printf("%d,", *(frequency + i));
	}
	free(numbers);
	free(frequency);
}

int unique(int* a, int* b,int length) {
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