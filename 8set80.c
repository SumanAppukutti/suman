#include <stdio.h>
#include<conio.h>
void main() 
{
	int num,rem,rev=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	num=rev;
	while(num!=0)
	{
		rem=num%10;
		if(rem%2==1)
		{
		printf("%d ",rem);
		}
		num=num/10;
	}
	getch();
}
