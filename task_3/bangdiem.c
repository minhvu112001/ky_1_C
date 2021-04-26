#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tong[5], mon[3][5];
	int i,j;
	
	printf("Nhap diem 5 sinh vien\n");
	printf("\nMon/Sv:    sv1 sv2 sv3 sv4 sv5\n");
	for (i=0;i<3;i++){
		printf("Mon %d:\t\t",i+1);
		for (j=0;j<5;j++){
			scanf("%d",&mon[i][j]);
			tong[i]=tong[i]+mon[i][j];
		}
	}
    for (j=0;j<5;j++){
    	tong[j]=0;
    	for(i=0;i<3;i++){
    		tong[j]=tong[j]+mon[i][j];
		}
	}
	for(i=0;i<5;i++){
		printf("\nSinh vien thu %d dat diem trung binh la: %.1f",i+1,tong[i]/3.0);
	}
	
		return 0;
}
