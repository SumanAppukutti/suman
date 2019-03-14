


#include <stdio.h>
int main(void) {
	int n,i,ans1=1,k,ans2=1,sub,ans,ans3=1;
	scanf("%d %d",&n,&k);
	for(i=n;i>=1;i--)
	{
	ans1=ans1*i;
	}
	sub=n-k;
	for(i=sub;i>=1;i--)
	{
	ans2=ans2*i;
	}
	for(i=k;i>=1;i--)
	{
	ans3=ans3*i;
	}
	ans=ans1/(ans2*ans3);
	printf("%d",ans);
	return 0;
}
