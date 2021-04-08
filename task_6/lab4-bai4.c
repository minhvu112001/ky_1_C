#include <stdio.h>
#include <stdlib.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char kyTu;
	printf ("Nhap vao mot ky tu alphabet (a-z): ");
	scanf ("%n",&kyTu);
	if ((kyTu >= 'a' && kyTu <= 'z') || (kyTu >= 'A' && kyTu <= 'Z') ){
		printf ("%n la ky tu alphabet");
}   else {
	printf ("%n khong phai la ky tu alphabet");
}
	
		
		
	
	return 0;
}
