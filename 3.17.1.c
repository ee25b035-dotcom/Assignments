//Based on 3Sum.c
//We will not give the array, rather we will give the pointer
#include <stdio.h>
int sum_of_array(int* a, int start, int end) {
	int sum = 0;
	//Now we try to make it so that it allows selecting subarrays by default
	for (int i = start; i <= end; i++) {
		sum = sum + *(a + i);
	}
	return sum;
}

int main(void) {
	int array[5] = {1,1,2,2,6};
	int required_sum = 6;
	int longest = 0;
	int length = (sizeof(array) / sizeof(int));
	int start = 0;
	int end = start;
	int reached = 0;
	for (int i = 0; i < length; i++) {
		for (int j = i; j < length; j++) {
			if (sum_of_array(array, i, j) == required_sum){
				reached = 1;
				if (longest < j - i + 1) {
					longest = (j - i + 1);
				}

			}
		}
	}	
	if (reached == 0) {
		printf("Such a sum is not possible");
		exit(1);
	}
	printf("%d", longest);
}
