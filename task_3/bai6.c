#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int T,L,H; //Toan,Ly,Hoa
	printf ("Nhap vao diem mon Toan = "), scanf ("%d",&T);
	printf ("\n Nhap vao diem mon Ly = "), scanf ("%d",&L);
	printf ("\n Nhap vao diem mon Hoa = "),scanf ("%d",&H);
	printf ("\n--------------------------------");
	printf ("\nKet qua: ");
	float DTB=(T+L+H)/3;
	printf ("\n\nDiem trung binh 3 mon Toan, Ly, Hoa la %.2f diem.",DTB);
	printf ("\n\n----------------------------------");
	getch();
	return 0;
}
