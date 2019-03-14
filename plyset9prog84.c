

#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int array[n],i,max=0,res,j;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		res=(array[i])|(array[j]);
		if(res>max)
		{
			max=res;
		}
		}
	}
	printf("%d",max);
	return 0;
}
