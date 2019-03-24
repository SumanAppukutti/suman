
#include <stdio.h>
int main(void) 
{
	int a[10],i,n,k;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
	if(a[i]==k)
	printf("the k element is present in the given array");
	}
	
	return 0;
}
