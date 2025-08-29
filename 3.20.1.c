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
	int array[5] = { 1,1,2,1,1};
	int required_sum = 6;
	int length = (sizeof(array) / sizeof(int));
	int reached = 0;
	//Here I will use reach for different thing
	//Now we will have to scan to the left of the element and the right of the element
	//And the limit is that the element can be anywhere from index=1 to n-2
	int index = 1;
	int storage = 0;
	int end;
	//Starting with the first element
	if (reached==0){
		for (int i = index; i < length; i++) {
			int sum_right = sum_of_array(array, i + 1, length - 1);
			int sum_left = sum_of_array(array, 0, i - 1);

			if (sum_left == sum_right) {
				reached = 1;
				storage = i;
				break;
			}
		}
	}
	if (reached == 1) {
		printf("%d", storage);
	}
	
	


}
