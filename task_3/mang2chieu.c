#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[3][4];
	int i, j;
	//khai bao mang 2 chieu bang nac danh
	int ma_tran[4][3];
	//nhap mang
	printf ("Nhap mang: \n");
	for (i = 0; i < 4; i++) {
		for ( j = 0; j < 3; j++){
			printf ("Nhap a[%d][%d] = ",i, j);
			scanf ("%d", &ma_tran[i][j]);
		}
		printf("\n");
	}
	//duyet mang
	printf ("Ket qua: \n");
	for (i = 0; i < 4; i++){
		for ( j = 0; j < 3; j++){
			printf ("%d", ma_tran[i][j]);
		}
		printf("\n");
	} 
	return 0;
}
