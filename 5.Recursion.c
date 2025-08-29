#include <stdio.h>
#include <stdlib.h>
//I require realloc to increase the size of the array?
//Or probably I can use calloc?
int main(void) {
	int array[2] = {1, 2};
	int new_array[1] = { 0 };
	int selected_element = 0;
	int index_to_write = 0;
	for (int i = 0; i < 2; i++) {
		selected_element = array[i];
		*(new_array + index_to_write) = selected_element;
		int* new_array = realloc(*new_array, sizeof(int) * 2);
		i += 1;
		for (int j = 0; j < 2; j++) {
			*(new_array+i)=array[]
		}
	}
	
}
