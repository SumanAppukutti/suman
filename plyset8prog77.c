

#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int array[n],i,count=1;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]<array[i+1])
		{
			count=count+1;
		}
		if(array[i]>array[i+1])
		{
			break;
		}
	}
	printf("%d",count);
	return 0;
}
