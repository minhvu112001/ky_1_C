#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf ("kich thuoc kieu du lieu int: %d byte \n ", sizeof (int));
	printf ("kich thuoc kieu du lieu void: %d byte \n ", sizeof (void));
	printf ("kich thuoc kieu du lieu char: %d byte \n ", sizeof (char));
	printf ("kich thuoc kieu du lieu double: %d byte \n ", sizeof (double));
	return 0;
}
