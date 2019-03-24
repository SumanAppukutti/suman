

#include <stdio.h>
int main(void) 
{
	long int n;
	scanf("%ld",&n);
	long int a[n],i,mul=1;
	for(i=0;i<n;i++)
	{
		scanf("%ld ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		mul=mul*a[i];
	}
	if(mul%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	
	return 0;
}
