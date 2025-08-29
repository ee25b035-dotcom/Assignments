#include<stdio.h>
//Pairs up elements which are paired up before
int main(void) {
	char string[6] = "ababa";
	int length = sizeof(string) / sizeof(char);
	//Size gives one more than the number of elements in the string
	int single_occurence = 0;
	int paired_occurence = 0;
	int max_length = 1;
	
		//Just check from left to right
		//Select an element and see where else it occurd s for j<i;
		// j<i and equality are already covered
	for (int i = 0; i < length-1; i++) {
		char read_element = string[i];
		int is_paired=1;
		//First element being read is this
		for (int j=i+1; j < length-1; j++) {
			char compared_element = string[j];
			if (read_element == compared_element) {
				paired_occurence++;
				is_paired = 0;
				break;
			}
			
		}
		if (is_paired == 1) {
			single_occurence++;
		}
	}
	printf("Number of paired occurences:%d\n", paired_occurence);
	single_occurence = single_occurence - paired_occurence;
	if (single_occurence > 0) {
		single_occurence = 1;
	}
	printf("Number of single occurences:%d\n", single_occurence);

	max_length = 2 * (paired_occurence)+single_occurence;
	printf("%d is the maximum length",max_length);
}