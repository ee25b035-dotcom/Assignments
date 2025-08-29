#include <stdio.h>
#include <stdlib.h>
int* add_pointer(int a, int b,int*ptr) {
	*ptr = a + b;
	return ptr;
}
int* multiply_pointer(int a, int b, int* ptr) {
	//*ptr to give a pinter to write to
	//Any alloc done here will be there only if I declare a pointer in main itself
	*ptr = a * b;
	return ptr;
}
//Local variable is not stored after its scope is over, so add_pointer will refer to a null pointer
//This is the only
int main(void) {
	int a = 3;
	int b = 4;
	int* add_ptr = calloc(1, sizeof(int));
	printf("Addition:%d\n", *(add_pointer(a, b, add_ptr)));
	int* mul_ptr = calloc(1, sizeof(int));
	printf("Multiplication:%d\n", *(multiply_pointer(a, b, mul_ptr)));
}
