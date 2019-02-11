#include<stdio.h>
#include<conio.h>
void main()
{
	int b,p,sum=1,i;
	scanf("%d %d",&b,&p);
	for(i=1;i<=p;i++)
	{
		sum=sum*b;
	}
	printf("%d",sum);
	getch();
}
