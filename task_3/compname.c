#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char compname[20] = "Microsoft";
	int len, ctr;
	len = strlen(compname);
	/* Determines the length of the string */
	for(ctr = 0; ctr < len; ctr++)
	/* Accesses and displays each character of the string */
	printf("%c *", compname[ctr]);
	return 0;
}
