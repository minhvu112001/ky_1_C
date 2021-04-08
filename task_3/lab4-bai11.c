#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d;
	int num1 = 6;
	int num2 = 5;
	printf ("\nMENU");
	printf ("Nhap so thu nhat: ");
	scanf ("%d",&num1);
	printf ("Nhap so thu hai: ");
	scanf ("%d",&num2);
	printf ("/n==========================================");
	printf ("\n +");
	printf ("\n -");
	printf ("\n *");
	printf ("\n /");
	printf ("\n=========================================");
	printf ("Chon: ");
	scanf ("%d",&d);
	printf ("Tich: 6 * 5 = 30");
	
	
	return 0;
}
