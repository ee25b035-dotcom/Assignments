#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[5] = { 1,2,3,-6,0 };
	int size = sizeof(array) / sizeof(array[0]);
	int end_element = array[4];
	int sum_zero = 1;
	for (int end = 2;end < size; end++) {
		if ((sum_of_array(&array, end)) == 0 && sum_zero==1) {
			continue;
		}
		if (sum_of_array(&array,end)==0){
			sum_zero = 0;
			printf("Substring with sum 0 exists");
			exit(0);
		}
		if (end==size - 1 && sum_zero == 1 && sum_of_array(&array,end)+end_element!=0) {
			printf("No substring with sum=0 exists");
			
			exit(0);
		}
		if (end == size - 1 && sum_zero == 1 && sum_of_array(&array, end) + end_element == 0) {
			printf("Substring with sum=0 exists");

			exit(0);
		}
	
		
	}
	printf("%d\n", (sum_of_array(&array, 4)) + end_element);
}
//First generate subarrays
//Where should the sub_array generator be placed??
//Best in main only??
//Then find their sum
//Finding sum of subarrays
//Stop the program if you ever find a zero in there is the last step for 19th problem
int sum_of_array(int* a,int end) {
	for (int i = 0; (i < end - 1); i++) {
		//size-1 is to prevent reading outside boundary values
		*(a + (i + 1)) = *(a + i) + *(a + i + 1);
	}
	return *(a + end - 1);
}