//week03-6.c
//SOIT106_ADVANCE_012
#include <stdio.h>
int main()
{
	int a[10];
	int now,N=0;
	while(1){
		scanf("%d",&now);
		if(now==0) break;
		a[N++]=now;
	}
	scanf("%d",&now);
	int ans=0;
	for(int i=0;i<N;i++){
		if(a[i]==now) ans++;
	}
	printf("%d\n",ans);
}