#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	printf ("Day la phuong trinh bac hai: ax2+bx+c=0\n");
	float a;
	float b;
	float c;
	float delta;
	float x1;
	float x2;
	float x12;
	printf ("Nhap a: ");
	scanf ("%f",&a);
	printf ("Nhap b: ");
	scanf ("%f",&b);
	printf ("Nhap c: ");
	scanf ("%f",&c);
	printf ("Phuong trinh la %fx2+%fx+%f=0\n", a,b,c);
	delta = b*b-4*a*c;
	printf ("Delta = %f\n", delta);
	if (delta = 0){
		x12=-b/2*a;
		printf ("Phuong trinh nay co mot nghiem kep:\n\t x1=x2 = %f\n", x12);
	} else
	if (delta < 0){
		printf ("Phuong trinh nay vo nghiem");
	} else {
		x1=(-b+sqrt(delta))/2*a;
		x2=(-b-sqrt(delta))/2*a;
		printf ("Phuong trinh co hai nghiem:\n\tx1 = %f\n\tx2 = &f\n",x1,x2);
	}
	return 0;
}
