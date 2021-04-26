#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sv, sv80=0, sv70=0, sv40=0, sv0=0;
	int i, i80=0, i70=0, i40=0, i0=0;
	int arr[100], arr80[100], arr70[100], arr40[100], arr0[100];
	printf ("So luong sinh vien la: ");
	scanf ("%d",&sv);
	
	for (i=0; i<sv; i++){
		printf ("Nhap diem cua sinh vien: %d",i+1);
		scanf ("%d",&arr[i]);
		
	}
	
	for(i=0; i<sv; i++){
		if (arr[i]>80){
			arr[i80]=arr[i];
			i80++;
		}
		else if (arr[i]>70){
			arr[i70]=arr[i];
			i70++;
		}
		else if (arr[i]>40){
			arr[i40]=arr[i];
			i40++;
		}
		else{
			arr[i0]=arr[i];
			i0++;
		}
	for (sv80=0 ; sv80<i80; sv80++)
		printf ("\nChuc mung sinh vien %d da gianh duoc hoc bong: 800$", i + 1);
	for (sv70=0 ; sv70<i70; sv70++)
		printf ("\nChuc mung sinh vien %d da gianh duoc hoc bong: 700$", i + 1);
	for (sv40=0 ; sv40<i40; sv40++)
		printf ("\nSinh vien %d da tot nghiep", i + 1);
	for (sv0=0 ; sv0<i0; sv0++)
		printf ("\nSinh vien %d da truot tot nghiep", i + 1);
	}
	return 0;
}
