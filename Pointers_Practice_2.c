#include <stdio.h>
int numbers[7] = { 1,2,3,4,5,9,8 };
//Here we must manually change the size of array whenever we change it
int find_max(int* a){
	int greatest_number = *a;
	int length = sizeof(numbers) / 4;

	//Initialise greatest_number as the first number in the array
	int i = 1;
	while (i < length) {
		if (greatest_number <= *(a + i)) {
			greatest_number = *(a + i);
		}i += 1;
	}
	return greatest_number;
}
int main(){
	int result=find_max(numbers);
	printf("%d", result);
	return 0;
}