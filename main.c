#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c, cc;
	
	
	printf("enter a character : ");
	scanf("%c",&c);
	
	cc=c+1;
	
	printf("the next character of %c(%i) is %c(%i))",c,c,cc,cc);
	
	return 0;
}
