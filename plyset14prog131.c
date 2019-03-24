

#include <stdio.h>
int main(void) 
{
	int n,rem,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
	    rem=n%10;
	    sum=sum+rem;
	    n=n/10;
	}
	if(sum%2==0)
	{
	    printf("E..that is even");
	}
	else
	{
	    printf("O..that is odd");
	}
	return 0;
}
