

#include <stdio.h>

int main(void) 
{
	int n,count=0;
	scanf("%d",&n);
	int array[n],j,i;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]<array[j])
			{
				count=count+1;
			}
		}
	}
	printf("%d",count);
	return 0;
}
