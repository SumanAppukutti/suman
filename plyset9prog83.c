

#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int array[n],i,res=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		res=(res)|(array[i]);
	}
	printf("%d",res);
	return 0;
}
