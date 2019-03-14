#include <stdio.h>
int main(void) 
{
	int n,x;
	scanf("%d %d",&n,&x);
	int array[n],i,j,sum,flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=array[i]+array[j];
			if(sum==x)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
