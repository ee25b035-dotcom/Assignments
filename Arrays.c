#include <stdio.h>
int main(void) {
	int numbers[5] = {1,2,3,4,5};
	printf("%d\n", numbers[3]);
	//name of array is a constant pointer to first element
	//constant pointer is one which points to same memory address for its entire lifetime
	int* ptr;
	ptr = &numbers;
	printf("%d\n", *ptr);
	printf("%p\n", ptr);
	
	int* ptr1 = &numbers[1];
	//you can refer to specific elements like this
	printf("%d\n", *ptr1);
	printf("%p\n", ptr1);
	int new_element = *(numbers + 1);
	//the memory addresses of these ptr1 and ptr are exactly 4 bytes apart, but that of new_element is completely u
	//unrelated
	// 4bytes is the amount of memory that compiler gives, to store an integer
	//the next way is to use pointer arithmetic
	printf("%d", new_element);
	printf("%p", &new_element);
	return 0;
	//when I give a value such as 258, then computer decides to combine btes to form contiguos blocks and decides how it
	//will interpret the data in memory....
	}