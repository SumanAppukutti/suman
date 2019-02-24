#include <stdio.h>
#include<conio.h>
void main() 
{
	int l,r,i,j,count=0;
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++)
	{
		for(j=2;j<=r;j++)
		{
			if((j*j)==i)
			{
				count=count+1;
			}
		}
	}
	printf("%d",count);
	getch();
}
