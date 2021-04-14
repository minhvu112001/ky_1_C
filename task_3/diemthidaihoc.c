#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int diemtrungbinh;
	int n;
	printf ("\nHay nhap diem TB: ");
	scanf ("%d",&n);
	printf ("\nDiem TB mon G-math: ");
	scanf ("%d",&n);
	printf ("\nDiem TB mon English: ");
	scanf ("%d",&n);
	if (n > 100)
	printf ("\nChuc mung, ban da tot nghiep va day la hoc bong cua ban!");
	
	
	return 0;
}

