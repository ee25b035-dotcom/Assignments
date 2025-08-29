#include <stdio.h>
//There are two approaches, i.e filling up array at compile time or using calloc
//However I know that those objects having size definite at compile time end up on a stack which is
//faster than calloc which uses data on a heap
//So I will use 1st method
//LOGIC:
//ith index=4- on out
//i goes from 0 to 4
int main(void) {
	int array_in[5] = { 1,2,3,4,5 };
	int array_out[5] = { 0,0,0,0,0 };
	int length = sizeof(array_in) / sizeof(int);
	for (int i = 0; i < length; i++) {
		*(array_out + i) = *(array_in + length - 1 - i);
		printf("%d\n", *(array_out + i));
	}
}