#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char hotelname1[15] = "Sea View";
	char hotelname2[15] = "Sea Breeze";
	printf("The old name is %s\n", hotelname1);
	strcpy(hotelname1, hotelname2);
	/* Changes the hotel name */
	printf("The new name is %s\n", hotelname2);
	/* Display the new name */
	getch();
	return 0;
}
