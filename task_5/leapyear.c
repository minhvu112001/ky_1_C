#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* To test for a leap year */

int main(int argc, char *argv[]) {
	int year;
	printf ("\nPlease enter a year: ");
	scanf ("%d", &year);
	if (year % 4 == 0 && 100 != 0 || year % 400 == 0);
	printf ("\n%d is a leap year!", year);
	return 0;
}