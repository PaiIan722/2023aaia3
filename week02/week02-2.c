//week02-2.c
//SOIT107_ADVANCE_006
#include <stdio.h>
int main()
{
	char s[200];
	scanf("%s",s);
	for(int i=0;s[i]!=0;i++){
		char c = s[i];
		if(c!='2') printf("%c",c);
	}
	printf("\n");
}