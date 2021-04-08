#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sotiencanrut;
	printf ("Welcome Vu Nhat Minh come with Techcombank!\n");
	printf ("Vui long nhap so tien ban can rut:"); scanf ("%d", &sotiencanrut);
	if (sotiencanrut%50000==0) 
	printf ("Ban da rut tien thanh cong!");
	
	else
	printf ("So tien ban rut khong phai la boi so cua 50000!\n Vui long nhap lai!");
	
	return 0;
}
