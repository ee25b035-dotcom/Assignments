#include <stdio.h>
int main(void) {
	char array[37] = "thequickbrownfoxjumpedoverthelazydog";
	//37 because there is also a null terminator
	//How about I split into list?
	//Lists can;t be used in C just yet, becuase they don't exist as a data type, you have to create them
	for (int i = 0; i < 37; i++) {
		char read_element = *(array + i);
		for (int j = i; j < 37; j++) {
			if (read_element == *(array + j)) {
				printf("%c", read_element);
				//I must find a way to not print an element which has been seen before??
				//So, I must store all elements that have been read so far in something, then I must 
				//compare and decide?
				//Now, what if I first decide to make an array of elements which are distinct, then see 
				//How many they are?
			}
		}
	}
}