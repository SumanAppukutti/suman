#include <stdio.h>
#include<conio.h>
void main()
{
	int n,a,rev=0;
	scanf("%d",&n);
	while(n!=0)
	{
	a=n%10;
	rev=rev*10+a;
	n=n/10;
	}
	printf("%d",rev);
	getch();
}
