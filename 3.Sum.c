#include <stdio.h>
//Sum up an array without changin the values in it
//Probably by initialising new variable called sum?
int main(void) {
	int array[5] = { 1, 2, 3, 4, 5 };
	int start = 0;
	int end= 3;
	int sum = *(array);
	//Now we try to make it so that it allows selecting subarrays by default
	for (int i = start; i < end; i++) {
		sum = sum + *(array + i + 1);
	}
	printf("The sum is: %d", sum);
}
