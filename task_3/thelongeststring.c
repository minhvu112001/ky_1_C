#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char lines[5][20];
	int ctr, longctr = 0;
	int longest(char lines_arr[][20]);
	/* Function declaration */
	for (ctr = 0; ctr < 5; ctr++)
	/* Accept string values into the array */
	{
		printf("\nEnter string %d: ", ctr + 1);
		scanf("%s", lines[ctr]);
	}
	longctr = longest(lines);
	/* Passes the array to the function */
	printf("\nThe longest string is %s", lines[longctr]);
	getch();
	return 0;
}
int longest(char lines_arr[][20]) /* Function definition */
{
	int i = 0, l_ctr = 0, prev_len, new_len;
	prev_len, strlen(lines_arr[i]);
	/* Determines the length of next element */
	if(new_len > prev_len)
	l_ctr = i; 
	        /*Stores the subscript of the longer string */
	prev_len = new_len;
	return l_ctr;
	/* Returns the subscript of the longest strings */
}
 
 
 


