#include <stdio.h>
//For i/o
#include<stdlib.h>
//for using memory control
#include<string.h>
//For using main operation i.e concatenation
int main(void) {
	char a[6] = { 'c','a','t','d','o','g' };
	char* output = calloc(7, sizeof(char));
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {
				for (int l = 0; l < 6; l++) {
					for (int m = 0; m < 6; m++) {
						for (int n = 0; n < 6; n++) {
							if ((a[i] - a[j]) * (a[j] - a[k]) * (a[k] - a[l]) * (a[l] - a[m]) * (a[m] - a[n]) * (a[n] - a[i]) == 0) {
								continue;
							}
							else if (((a[i] - a[j]) * (a[j] - a[k]) * (a[k] - a[l]) * (a[l] - a[m]) * (a[m] - a[n]) * (a[n] - a[i]) != 0)) {
								*(output) = a[i];
								*(output + 1) = a[j];
								*(output + 2) = a[k];
								*(output + 3) = a[l];
								*(output + 4) = a[m];
								*(output + 5) = a[n];
								for (int p = 0; p < 6; p++) {
									printf("%c", *(output + p));
								}
							}printf("\n");
						}
					}
				}
			}
		}
	}
}