#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	incre ();
	incre ();
	incre ();



	



	return 0;
}
incre () {
 static	char var = 65; /* var is automatic  variable*/
	printf ("\n The character stored in var is %c", var++);
}
