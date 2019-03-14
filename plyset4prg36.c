#include <stdio.h>
#include<conio.h>
void main() 
{
	int n,k,count=0,rem;
	scanf("%d %d",&n,&k);
	while(n!=0)
	{
		rem=n%10;
		if(rem==k)
		{
			count=count+1;
		}
		n=n/10;
	}
	printf("%d",count);
	getch();
}
