#include <stdio.h>
#include <stdlib.h>
//check so nguyen to

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int check_prime(int a) {
	int i;
	float check_prime;
	for (i=2; i<=a/2; i++){
		check_prime=a%i;
		if(check_prime==0)
		return 0;
	}
	return 1;
}
int prime(int arr[], int size){
	int i;
	for(i=1; i<size+1; i++){
		if (check_prime(i)==1)
		print("t%d",i);
	}
}
	
void main(){

	int i, size;
	printf("Enter value number: ");
	scanf("%d",&size);
	int arr_main[size];
	for(i=0; i<size; i++)
	arr_main[i]=i;
	prime(arr_main, size);
	return 0;
}




