

#include <stdio.h>
int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n],i,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(sum%2==0)
		{
			printf("%d ",sum);
		}
		else
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
