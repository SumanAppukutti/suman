

#include <stdio.h>
int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n],i,m,temp,j;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	m=n/2;
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=m;i<n;i++)
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
	for(i=m;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
