#include <stdio.h>
void swap(int* a,int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int x = 3;
	int y = 4;
	swap(&x, &y);
	printf("%d", x);
	printf("%d",y);
}

//Whenever a new function takes variables from main, there are two ways to do so
//One is to recieve a copy of the variable or to recieve the memory address
//Copy is when you dont want to modify
//memory address is when you want to modify, basically you take pointers and go and change the value there
//this changes value of the variable