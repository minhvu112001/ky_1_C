#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[5], ctr, sum = 0;
	int sum_arr(int num_arr[]); /* Function declaration */
	for (ctr = 0; ctr < 5; ctr++ ) /* Accept numbers into the array */
	{
		printf("\nEnter number %d: ", ctr+1);
		scanf("%d", &num[ctr]);
    }
    sum = sum_arr(num); /* Invokes the function */
    printf("\nThe sum of the array is %d", sum);
    getch();
	return 0;
}
int sum_arr(int num_arr[]) /* Function definition */
{
	int i, total;
	for(i = 0, total = 0; i < 5; i++) /* Calculate the sum */
	total += num_arr[i];
	return total; /*Return the sum to main */
}
