#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int array[5] = { 1, 2, 3, 4, 5 };
	int n = 4;
	//No. of shift each element should undergo to the right
	int* new_array = calloc(5, sizeof(int));
	if (new_array == NULL) {
		printf("Memory allocation failed");
		exit(1);
	}
	for (int i = 0; i < 5; i++) {
		*(new_array +((n + i) % 5)) = array[i];
	}
	for (int i = 0; i < 5; i++) {
		printf("%d\n", new_array[i]);
	}
	free(new_array);
}