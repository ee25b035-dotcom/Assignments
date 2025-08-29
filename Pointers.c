#include <stdio.h>  
int main(void) {
	int value = 1800;
	int* ptr;
	//pointer variable which stores the memory address of an integer
	ptr = &value;
	//&function on variable brings memory address which I have assigned to pointer
	printf("The value of this is %d\n", value);
	printf("It is stored in this memory address: %p\n", ptr);
	printf("It is stored in this memory address: %p\n", &value);
	//&value=ptr so it has memory address
	//*ptr=*&value which means the value itself
	//it is the value located at the memory address of value
	printf("The value at the memory address given by ptr is %d\n", *ptr);
}
