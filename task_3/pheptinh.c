#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop*/
int sum(int a, int b){
	return a+b;
}
int divi(int a, int b){
	return a/b;
}
int multi(int a, int b){
	return a*b;
}
int sub(int a, int b){
	return a-b;
} 
int main(){
	int a, b;
	int pheptinh;
	printf("nhap so a:\n");
	scanf("%d",&a);
	printf("nhap so b:\n");
	scanf("%d",&b);
	printf("\tPHEP TINH\n");
	printf("1. Phep cong\n");
	printf("2. Phep tru\n");
	printf("3. Phep nhan\n");
	printf("4. Phep chia\n");
	printf("Phep tinh ban chon la:\n");
	scanf("%d",&pheptinh);
	
	switch(pheptinh){
		case 1:
			printf("tong la: %d+%d=%d\n",a,b,(a+b));
			break;
		case 2:
			printf("hieu la: %d-%d=%d\n",a,b,(a-b));
			break;
		case 3:
			printf("tich la: %d*%d=%d\n",a,b,(a*b));
			break;
		case 4:
			printf("hieu la: %d/%d=%d\n",a,b,(a/b));
			break;
		default:
			printf("chon sai roi chon lai\n");
	} 
	return 0;
}
