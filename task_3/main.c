#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r;
	float chuvi, dientich;
	printf ("Nhap ban kinh r: ");
	scanf ("%d",&r);
	chuvi = 2*PI*r;
	dientich = PI*r*r;
	printf ("Chu vi vong tron la: %f\n", chuvi);
	printf ("Dien tich vong tron la: %f", dientich);
	getch ();
return 0;    
}

