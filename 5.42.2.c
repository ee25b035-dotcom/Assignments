#include <stdio.h>
#include<stdlib.h>
//Without allocating on heap, I can't use pointers to talk to other functions
int* add_pointer(int a, int b) {
	int temp = a + b;
	int* ptr = calloc(sizeof(temp)/sizeof(int), sizeof(int));
	
	if (ptr == NULL) {
		printf("Memory allocation failed, exiting..");
		exit(1);
	}
	*ptr = a + b;
	return ptr;
}
int* multiply_pointer(int a, int b) {
	//*ptr to give a pinter to write to
	//Any alloc done here will be there only if I declare a pointer in main itself
	int temp1 = a * b;
	
	int* mul_ptr = calloc(sizeof(temp1)/sizeof(int), sizeof(int));
	if (mul_ptr == NULL) {
		printf("Exiting, Memory alloction failed");
		exit(1);
	}
	*mul_ptr = a * b;
	return mul_ptr;
}
//Local variable is not stored after its scope is over, so add_pointer will refer to a null pointer
//This is the only
int main(void) {
	int a = 46341;
	int b = 46341;
	printf("Addition:%d\n", *(add_pointer(a, b)));
	printf("Multiplication:%d\n", *(multiply_pointer(a, b)));
	free(add_pointer(a, b));
	free(multiply_pointer(a, b));
}
//If the multiplication or addiion value exceeds max that can be stored using 32 bits, it will overflow, hence
//We will make it better 
