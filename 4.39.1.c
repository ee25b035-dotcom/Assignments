#include <stdio.h>
#include <stdlib.h>
//How do I generate numbers?
//Like this
//Similarly we can append strings
int main(void) {
	int array[3] = { 1,2,3 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k= 0; k < 3; k++) {
				if ((i - j) * (j - k) * (k - i) == 0) {
					continue;
				}
				else {
					printf("%d\n", 100 * array[i] + 10 * array[j] + array[k]);
				}
				
			}
		}
	}
}