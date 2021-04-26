#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[20];
	/* name is declared as a single dimensional character array*/
	/* Clear the screen */
	puts("Enter your name: "); /* Display the message */
	
	scanf("%s", name); /* Access the input */
	printf("Hi there: %s ",name); /* Display the input */
 
	getch();
	return 0;
}
