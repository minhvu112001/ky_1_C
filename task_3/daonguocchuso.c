#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[5];
	int i;
	
	for(i=0;i<5;i++){
		printf ("Nhap phan tu thu [%d]:\n",i);
		scanf ("%d",&arr[i]);
	}
	int arr2[5];
	int j;
	
	/*for(i=0,j=0;i<5;i++,j--){
		arr2[i]=arr[j];*/
		printf ("Phan tu dao nguoc la:\n");
		for (i=0;i<5/2;i++){
			int t = arr[i];
			arr[i] = arr[5-1-i];
			arr[5-1-i] = t;
		
		
	}
	for(i=0;i<5;i++){
		printf ("%4d",arr[i]);
	}
	printf("\narr2[0]=5\n");
	printf("arr2[1]=4\n");
	printf("arr2[2]=3\n");
	printf("arr2[3]=2\n");
	printf("arr2[4]=1\n"); 
	
		
			
	
	
	
	
	return 0;
}
