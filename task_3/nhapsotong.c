#include <stdio.h>
int sum_arr(int arr[10], int size)
{
	int i, total = 0;
	for(i = 0; i < size; i++)
	total += arr[i];
	return total;
} 
    

int main(){
	int size;
	int myarr[4]={1, 2, 3, 4};
	int r = sum_arr(myarr, 4);
	printf("sum = %d",r);
	return 0;
	
}




