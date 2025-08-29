//The only change is now, whenever I discover an element is odd, I just dump it in the preferred place
// and then I check if the program conditions are actually met
#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int array[5] = { 2, 2, 2, 5, 5 };
	int odd_numbers = 0;

	int length = (sizeof(array) / sizeof(array[0]));
	int* output = calloc(length, sizeof(int));
	if (output == NULL) {
		printf("Memory allocation failed");
		free(output);
		output = NULL;
		exit(1);
	}
	int j = 0;//To refer to the new array's indices(only odd)
	int k = 1;
	
	printf("Length: %d\n", length);
	//We will first calculate number of odd numbers and then we will initialise the array
	for (int i = 0; i < length; i++) {
		
		if (j > length) {
			break;
		}
		if (array[i] % 2) {
			odd_numbers++;
			*(output + j) = array[i];
			j += 2;
		}
		else {
			if (j > length) {
				break;
			}
			*(output + k) = array[i];
			k += 2;
		}
		
	}
	int even_numbers = length - odd_numbers;
	//Given length, we must find actual number of even and odd numbers possible
	int required_even = length / 2;
	//this is useful because it works everytime
	int required_odd = length - (length / 2);
	int is_Possible = 0;
	if (required_odd == odd_numbers && required_even == even_numbers) {
		is_Possible = 1;
		for (int i = 0; i < length; i++) {
			printf("%d\n", *(output + i));
		}
	}
	else {
		printf("Exiting,NP");
		exit(0);
	}

	free(output);
}

