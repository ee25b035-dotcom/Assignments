#include <stdio.h>
int main(void) {
	int array[5] = { 1, 2, 3, 4, 5};
	int odd_numbers = 0;
	
	int length = (sizeof(array) / sizeof(array[0]));
	printf("Length: %d\n", length);
	//We will first calculate number of odd numbers and then we will initialise the array
	for (int i = 0; i < length; i++) {
		if (array[i] % 2) {
			odd_numbers++;
			printf("%d\n", array[i]);
		}
	}
	int even_numbers = length - odd_numbers;
	printf("%d\n", odd_numbers);
	//Given length, we must find actual number of even and odd numbers possible
	int required_even = length / 2;
	printf("Required even:%d\n", required_even);
	//this is useful because it works everytime

	int required_odd = length - (length / 2);
	printf("Required odd:%d\n", required_odd);
	int is_Possible = 0;
	if (required_odd == odd_numbers && required_even == even_numbers) {
		is_Possible =1;
		printf("Sorting is now possible, Continue");
	}
	else {
		printf("Sorting is not possible, Now exiting...");
		exit(0);
	}
	//Upto here the checking possiblity of sorting process is working
	//Now we need to sort it
	// Sorting:
	//Create a new array, using pointers rewrite given values
	//Add odd numbers to odd values, and even numbers to even indices
	//Better to use calloc only, as it will not give errors
	int* output = calloc(length, sizeof(int));
	int j = 0;//To refer to the new array's indices
	for (int i = 0; i < length; i++) {
		if (array[i]%2==1) {
			*(output + j) = array[i];
			printf("%d", output[j]);
		}
		j++;
	}
	free(output);
}
