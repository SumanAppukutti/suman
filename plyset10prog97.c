

#include <stdio.h>
int main(void) 
{
	int n,i,k,sum=0;
	scanf("%d %d",&n,&k);
	for(i=n;i<=k;i++)
	{
	    if(i%2==1)
	    {
	       sum=sum+i;
	    }
	}
	 printf("%d",sum);
	return 0;
}
