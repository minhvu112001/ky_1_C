#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch = getch ();
	printf ("\nNhap vao mot ky tu");
	scanf ("%c",&ch);
	if (ch >= 'a'&& ch <= 'z' )
	printf ("Chu %c la chu cai thuong!");
	else if (ch >= 'A'&& ch <= 'Z')
	printf ("Chu %c la chu cai hoa!");
	else if (ch>='1'&&ch<='9')
	printf ("Cai nay la so roi nhung van thuoc bang chu cai. Chap nhan duoc!");
	else printf ("Ki tu dac biet");
	getch ();
	return 0;
}
