#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//char c;
	int c;
	int d = '5';
	int e = d - '0';
	
	char s[10];
	
	printf("¿é¤J¦r¤¸\n");
	scanf("%c", &c);
	printf("c   char=%c , dec=%d , hex=%x \n",c,c,c);
	printf("d='5'   char=%c , dec=%d , hex=%x \n",d,d,d);	
	printf("e=d-'0'   char=%c , dec=%d , hex=%x \n",e,e,e);
	printf("bbbb\n");
	printf("\n\n\n");
	printf("¿é¤J¦r¦ê\n");
	scanf("%s", s);
	printf("%s , %c %c %c %c\n",s,s[0],s[1],s[2],s[3]);
	printf("%s , %x %x %x %x\n",s,s[0],s[1],s[2],s[3]);
	
	system("pause");
	return 0;
}

