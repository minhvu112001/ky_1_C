#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y, *px, *py;
	/* Storing address of x in px */
	px = &x;
	/* Storing address of y in py */
	py = &y; 
	x = 15, y = 20;
	printf ("x = %d, y = %d\n", x, y);
	swap (px, py);
	/* Passing address of x and y */
	printf ("\nAfter interchanging x = %d, y = %d\n", x, y);
	return 0;
}
swap (int *u, int *v){
/* Accept the value of px and py into u and v */	
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;
	return;
}
