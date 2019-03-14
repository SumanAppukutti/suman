#include <stdio.h>
#include<conio.h>
void main() 
{
	int num,i;
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if(i%2==0 && num%i==0)
		{
			printf("%d ",i);
		}
	}
getch();
}
