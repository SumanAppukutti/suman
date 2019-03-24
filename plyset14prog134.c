

#include <stdio.h>
int main(void) 
{
	int n,l,r,i,j,temp;
	scanf("%d %d %d",&n,&l,&r);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	int small=a[l-1];
	for(i=l-1;i<r;i++)
	{
		if(a[i]<=small)
		{
			small=a[i];
		}
	}
	printf("%d",small);
	return 0;
}
