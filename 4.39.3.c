#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int array[2] = {1,2};
	int array_copy[2] = { 1,2 };
	for (int i = 0; i < 2; i++) {
		printf("%d", array[i]);
	}
	printf("\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int temp = array_copy[i];
			int tempb = array_copy[j];
			*(array_copy + i) = 0;
			*(array_copy + j) = 0;
			for (int k= 0; k < 2; k++) {
				printf("%d", array_copy[k]);
			}
			printf("\n");
			*(array_copy + i) = temp;
			*(array_copy + j) = tempb;

		}
	}
}