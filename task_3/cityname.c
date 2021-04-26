#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[15] = "New York";
	char str2[15] = "Washington";
	char chr = 'a', *loc;
	loc = strchr(str1, chr);
	/* Check for the occurrence of the character value held by chr in the first city name */
	if(loc != NULL)
		printf("%c occur in %s\n", chr, str1);
	else
	    printf("%c does not occur in %s\n", chr, str1);
	loc = strchr(str2, chr);
	/* Check for the occurrence of the character in the second city name */ 
	if(loc != NULL)
	   printf("%c occur in %s\n", chr, str2); 
	else
	   printf("%c does not occur in %s\n", chr, str2);
	getch();     
	return 0;
}
