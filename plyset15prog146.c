

#include <stdio.h>
int main(void){
	int i,a,b,f1=1,f2=1,ans;
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;i++)
	{
	f1=f1*i;
	}
	for(i=1;i<=b;i++)
	{
	f2=f2*i;}
ans=f1/f2;
printf("%d",ans);
	return 0;
}
