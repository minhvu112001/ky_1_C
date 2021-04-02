#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char USD = 1, VND = 0;
	float vnd1,usd1,luachon,soTienDoi;
	printf ("=== Lua chon tien te can doi ===\n\n");
	printf ("Ban chon loai tien USD hay VND (VND/USD): \n\n ");
	scanf ("%s", &luachon);
	if (luachon){
		printf ("Nhap so tien USD can doi ra VND: \n");
		scanf ("%s",&usd1);
		soTienDoi = usd1 = 16689;
   }
    else {
    	printf ("Nhap so tien VND can doi ra USD: \n");
    	scanf ("%s",&vnd1);
    	soTienDoi = vnd1 = 16689;
   }
   
    if (luachon){
    	printf ("So tien doi duoc la: %f VND \n",soTienDoi);
	}
    	
	else{
		printf ("So tien doi duoc la: $%.2f", soTienDoi ); 
	}
	
		    
	
	
	return 0;
}
