

#include <stdio.h>
int main(void)
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i,j,temp,b,flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			flag=1;
			if(a[i+1==k])
			{
			b=a[i+2];
			}
			else
			{
				b=a[i+1];
			}
			break;
		}
	}
	if(flag==1)
	{
		printf("%d",b);
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>k)
			{
				printf("%d",a[i]);
				break;
			}
		}
	}
	
	return 0;
}
