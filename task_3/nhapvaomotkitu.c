#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	printf ("Nhap vao mot ky tu \n");
	scanf ("%c",&ch);
	if (ch> 'a' ||  ch< 'z')
	switch (ch){
		case 'a':
		case 'i':
		case 'u':
		case 'o':
		case 'e':
		case 'A':
		case 'I':
		case 'E':
		case 'O':
		case 'U':
		printf ("%c la nguyen am \n",ch);
		break;
		default :
		printf ("%c la phu am \n",ch);	
	}
	return 0;
}
