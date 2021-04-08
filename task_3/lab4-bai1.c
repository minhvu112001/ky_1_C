#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	printf ("\nNhap vao mot ky tu: ");
	scanf ("%c",&c);
	c=getchar();
	printf ("\nMa ASCII cua ky tu do la: %d",c,c);
	return 0;
}
