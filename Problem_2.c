#include <stdio.h>
//To do this without swap, we will do this
//We will convert(A,b) to (a,a+b) without introducing new variable
#include <stdlib.h>
int main(void) {
	int a = 3;
	int b = 4;
	b = a + b;
	printf("%d",b);
	//this converts it into (3,7)
}