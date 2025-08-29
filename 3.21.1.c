#include<stdio.h>
int* smallest_in_array(int* a, int start, int length) {
	int smallest = *(a);
	for (int i = start + 1; i < length; i++) {
		if (*(a + i) < smallest) {
			smallest = *(a + i);
		}
		else {
			continue;
		}
		return &smallest;
	}
}
//Simple swapping function
int swap(int* a, int* b) {
	int temp = *a;
		* a = *b;
		* b = temp;
}
int main(void) {
	int array[5] = { 1,2,3,4,5 };
	int length = sizeof(array) / sizeof(int);
	int smallest = array[0];
	//Just think, is there a difference whether you do smallest or largest?
	//yes, there definitely is, take example of a descending order array sorted by an ascending sorter
}

