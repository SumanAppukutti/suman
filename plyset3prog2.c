#include <stdio.h>
#include<conio.h>
void main()
{
	int n,k,n1,i;
	scanf("%d %d",&n,&k);
	if(n>k)
	{
	    n1=n;
	}
	else
	{
	    n1=k;
	}
    for(i=n1;i>=2;i--)
    {
        if(n%i==0 && k%i==0)
        {
            printf("%d",i);
            break;
        }
    }
	return 0;
}
