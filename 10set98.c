#include <stdio.h>
 #include<conio.h>
void main() 
{
	int n,array[30],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(i!=array[i])
		{
			printf("\n%d",i);
			break;
		}
	}
 
	getch();
}
