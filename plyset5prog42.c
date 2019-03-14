#include <stdio.h>
#incude<conio.h>
int main(void) 
{
	int n,array[20],i,j,flag=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(array[i]>array[j])
		{
			flag=1;
			break;
			
		}
		}
	}
	if(flag==1)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
  
getch();
}
