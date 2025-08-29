#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
//swapping with temporary variable

int main(void) {
	int input1;
	scanf_s("%d", &input1);
	int input2;
	scanf_s("%d", &input2);
	//Swap function interchanges the pointers
	swap(&input1, &input2);
	printf("%d\n", input1);
	printf("%d\n", input2);
	return 0;
	
}
