#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf ("nhap vao so a");
	scanf("%d",&a);
	int b,c;
	b=a++;
	printf ("a la: %d\n ", a); 
	printf ("b la: %d\n", b);
	c=++a;
	printf ("a la: %d\n ", a);
	printf ("c la: %d\n ", c);
	
	
	
	
	
	return 0;
}
