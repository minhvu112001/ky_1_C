#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,a,b,c,d;
	printf ("Nhap gia tri i: \n");
	scanf ("%d",&i);
	printf ("Nhap gia tri a: \n");
	scanf ("%d",&a);
	printf ("Nhap gia tri b: \n");
	scanf ("%d",&b);
	printf ("nhap gia tri c: \n");
	scanf ("%d",&c);
	printf ("nhap gia tri d: \n");
	scanf ("%d",&d);
	printf ("i= %d a = %d b = %d c= %d d = %d\n",i,a,b,c,d);
	printf ("Gia tri ++i%%7 = %d\n",++i%7);
	printf ("Gia tri 5*(c-3+d) = %d\n",5*(c-3+d));
	printf ("Gia tri a*(b+c/d)-22 =%d\n ",a*(b+c/d)-22);
	return 0;
}
