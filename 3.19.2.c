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
	int array[5] = { 1,1,2,2,-6 };
	int required_sum = 0;
	int length = (sizeof(array) / sizeof(int));
	int reached = 0;
	if (reached == 0) {
		for (int i = 0; i < length; i++) {
			for (int j = i; j < length; j++) {
				printf("%d", reached);
				if (sum_of_array(array, i, j) == required_sum) {
					reached = 1;
					break;
					//The problem was that it completed all the loops then went to check back whether the reached was set to 0 or 1
					//So it never stopped, this is the first error
					//The second thing is that you need to use two breaks becuase you need to get out of both loops once required condition
					//is met
					//Understand why using only one break statement gives you output 000001111
				}
				
			}
			if(reached == 1) {
				break;
			}
		}
	}
	else if (reached == 1) {
		printf("It is possible");
		exit(0);
	}

}
	
//One break statement: 000001111
//i=0, and j=0
//sum1=1, sum 2=2 sum 3=4, sum 4=6, sum 5=0
//first print reached then change it right,so we got 5 zeroes, then,i became 1 and inner loop broke, similarly 2,3,4, so we got 1 four times
// Why did we get 000001111111111(15 digits) then?, 1st element-5 , 2nd element-4, 3rd element=3, 4th and 5th again 2 arrays