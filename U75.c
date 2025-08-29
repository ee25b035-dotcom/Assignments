#include<stdio.h>
int main(void) {
	int hour = 3600;
	int minute = 60;
	int seconds = 3500;
	int no_of_hours = seconds / hour;
	int no_of_minutes = seconds % hour / minute;
	int no_of_seconds = seconds % minute;
	printf("It translates to %d hours, %d minutes and %d seconds", no_of_hours, no_of_minutes, no_of_seconds);

}