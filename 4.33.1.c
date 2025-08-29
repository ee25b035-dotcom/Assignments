#include<stdio.h>
//Program should determine which all are possible
//Must take input first, then make something true and give output based on what is true
//Mode 1:a+b=c
//Probably order matters,otherwise we will swap as well
//Mode 2:a=b-c
//Mode 3:a*b=c
#include<stdlib.h>
int main(void) {
	//First we must determine if atleast one is true, then we will see what is true
	//This can be done in one method, using abc=0 gives atleast one is zero right
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	//For now it can't handle errors where you enter strings
	if ((a + b - c) * (a + c - b) * (a * b - c) == 0) {
		printf("Atleast one holds true\n");

	}

	else {
		printf("Exiting");
		exit(0);
	}
	if (a + b - c == 0) {
		printf("1");
	}
	if (a + c - b == 0) {
		printf("2");
	}
	if (a * b - c == 0) {
		printf("3");
	}
}