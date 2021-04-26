#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int add (int a, int b){
	int c;
	c = a + b;
	return c;
}
int sub (int a, int b){
	return a - b;
}
int main(int argc, char *argv[]) {
	int sum = add(3, 4);
	int x, y;
	printf ("sum = %d", sum);
	add (x,y);
	scanf ("sub = %d", sub);
	int tra = sub (9, 7);
	
	return 0;
}
