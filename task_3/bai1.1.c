#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[10];
	float marks[100];
	int i;
	for(i = 0; i < 10; i++){
		arr [i] = i + 1;
		printf ("arr[%d] = %d", (i + 1), arr[i]);
		scanf ("%d",&arr[i]);
	}
	return 0;
}
