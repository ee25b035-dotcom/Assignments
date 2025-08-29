#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int* ptr = NULL;
	//Saying it is NULL, means pointer is no longer valid
	//So it will not allow you to write again to same memory location
	ptr = malloc(sizeof(int));
	if (ptr == NULL){
		printf("Memory allocation failed\n");
	return 1;
	}
	*ptr = 100;
	//green highlight means that you might be using a pointer that is NULL, if malloc fails
	printf("%d", *ptr);
	free(ptr);
}