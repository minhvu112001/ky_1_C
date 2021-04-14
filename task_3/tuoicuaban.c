#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int gender;
	char name [100];
	char kind [200];
	
	printf ("Ten cua ban la: \n");
	gets (name);
	
	char age;
	printf ("tuoi cua ban la: \n");
	scanf ("%d",&age);
	fflush (stdin);0
	printf ("Gioi tinh cua ban la: \n");
	scanf ("%c",gender);
	for (i = 1;i <= age; i++){
		if (age>='1' && age<= '19')
			printf ("chao em %s\n");
		else if (age>= '20' && age<= '25')
			printf ("chao ban %s\n");
		else if (age>= '26' && age<= '40')
			printf ("chao anh %s\n");
		if (gender == 'm')
		printf ("Chao bac %s\n");
		else if (gender == 'f')
		printf ("Chao co\n");
}
		
	
	
	return 0;
}
