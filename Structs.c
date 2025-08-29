#include <stdio.h>
struct MyTuple {
	int myInt;
	float myFloat;
	char myChar;
};
int main(void) {
	struct MyTuple tuple_array[3];
	tuple_array[0].myChar = "A";
	tuple_array[0].myFloat = 9.99;
	tuple_array[0].myInt = 1;
}
