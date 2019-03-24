

#include <stdio.h>
int main(void) 
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i,temp,j;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=k;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	for(i=k;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
