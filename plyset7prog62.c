#include <stdio.h>
int main(void) 
{
	int n,a,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=n/i;
		if(a%2!=0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
