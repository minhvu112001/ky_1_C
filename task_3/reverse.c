#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void printArray(int arr[], int size){



	int i; 
	printf ("Array number are: ");
	for (i = 0; i < 5; i++){
		printf("%d",arr[i]);
	}

	return 0;
}
    int main(){
    	int arr [5];
    	printArray(arr,5); /*Goi ham va truyen vao mot mang*/
    	return 0;
	}
