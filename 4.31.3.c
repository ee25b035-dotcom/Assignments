#include <stdio.h>
#include <stdlib.h>
int main(void) {
	//How do I find list of distinct elements in an array?
	char array[25] = "aaaaabbbbbcccccdddddeeee";
	char* distinct_elements = calloc(25, sizeof(char));
	int* frequency = calloc(25, sizeof(char));
	//The expected output is "abcde", but how??
	for (int i = 0; i < 25; i++) {
		char read_element = *(array + i);
		int no_of_repeats = 0;
		int is_checked = 0;
		int written = 0;
		//No repeat logic?
		for (int k = 0; k < 25; k++) {
			if (*(distinct_elements+k) == read_element) {
				is_checked = 1;
				break;
			}
		}
		
		if ((is_checked) == 1) {
			continue;
		}
		printf("Read element:%c\n", read_element);
		for (int j = 0; j < 25; j++) {

			if (*(array + j) == read_element) {
				no_of_repeats += 1;
			}
			else {
			*(distinct_elements + i) = read_element;
			}
		}
		*(frequency + i) = no_of_repeats;
		printf("It has been repeated:%d number of times\n", no_of_repeats);
	}
	printf("The set of distinct elements is:");
	for (int i = 0; i < 25; i++) {
		printf("%c", *(distinct_elements + i));
	}
	
	return 0;
}