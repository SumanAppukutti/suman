

#include <stdio.h>

int main(void) 
{
	int n,k;
	scanf("%d %d",&n,&k);
	int array[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]-array[i+1]==k)
		{
			printf("%d",array[i]);
			break;
		}
	}
	return 0;
}
