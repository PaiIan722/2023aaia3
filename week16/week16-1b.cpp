//week16-1b.cpp
#include <stdio.h>
#include <math.h>
int MYPOWER(int a,int b){
	return pow(a,b);
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}