#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age;
	char gender, kind;
	char name [200];
	printf ("\nTen cua ban la: ");
	gets (name);
	printf ("\nGioi tinh: ");
	scanf("%c",&gender);
	fflush (stdin);
	printf ("\nTuoi: ");
	scanf ("%d",&age);
	fflush (stdin);
	printf ("\nBan co tot bung khong (y/n): ");
	scanf ("%c",&kind);
	if (gender == 'M')
	printf ("Hi Mr %s. \n Im sorry, I dont want men! ", name);
	else if (age<18)
	printf ("Hi Mr %s. \n Im sorry, you re very young! ", name);
	else if (age>40)
	printf ("Hi Mr %s. \n Im sorry, you re older than me! ", name);
	else if (kind == 'n')
	printf ("Hi Mr %s. \n Im sorry, I dont like you! ", name);
	else
	printf ("Hi Mr %s. \n I love you! ", name);

	
	
	return 0;
}
