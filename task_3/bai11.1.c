#include <stdio.h>
#include <stdlib.h>
/* Program demonstrates a single dimension array */
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int num [5];
	int i;
	num [0] = 10;
	num [1] = 70;
	num [2] = 60;
	num [3] = 40;
	num [4] = 50;
	for (i = 0; i < 5; i++);
	printf ("\n Number at [%d] is %d", i, num[i]);
	return 0;
}
