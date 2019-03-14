#include <stdio.h>
#incude<conio.h>
void main() 
{
	int n,k,i,j,mul=1,flag=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
			for(j=i;j>0;j--)
			{
				mul=mul*k;
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
