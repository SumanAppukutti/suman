#include <stdio.h>
#include<conio.h>
void main() 
{
	float n;
	int a;
	scanf("%f",&n);
	if(n<0)
	{
	    a=(int)(n-0.5);
	}
	else
	{
	    a=(int)(n+0.5);
	}
	printf("%d",a);
getch();
}
