#include <stdio.h>
#include<conio.h>
void main() 
{
	int n,i,j,mul=1,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			mul=mul*2;
			if(mul==n)
			{
				flag=1;
				break;
			}
			}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	getch();
}
