#include <stdio.h>
/*void hello(){
	printf ("hello world!");
}



int main(int argc, char *argv[]) {
	hello ();
	return 0;
}*/
void greeting(char name[150], int age){
	 printf ("nhap ten:\n");
     printf ("hello %s age %d", name, age);
}	
int main(){
	
	char myname[150];
	gets(myname);
	int myage;
	fflush(stdin);
	scanf("%d", &myage);
	greeting(myname, myage);
	return 0;
}	

