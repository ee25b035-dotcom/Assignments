#include <stdio.h>
int main(void) {
	//Use formula to do it, easy
	//Or use recursion for fun
	int n = 5;
	int first = 3;
	int common_difference = 2;
	//we want the fifth term in the sequence
	printf("%d\n", first);
	for (int i = 2; i <= n; i++) {
		first = first+common_difference;
		printf("%d\n", first);
	}
	
}