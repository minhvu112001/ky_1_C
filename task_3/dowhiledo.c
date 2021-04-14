#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pin, card;
	pin = 1234;
	do{
		printf ("\nNhap ma pin: ");
		scanf ("%d",&pin);
		
	}while (pin != 1234);
	   printf ("\n Ma card nhap la: ",card);
	   scanf ("%d",&card); 
	return 0;
}
