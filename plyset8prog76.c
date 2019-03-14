

#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int array[n],i,count_even=0,count_odd=0,temp1,temp2;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]%2==0)
		{
			count_even=count_even+1;
			temp1=array[i];
		}
		else
		{
			count_odd=count_odd+1;
			temp2=array[i];
		}
	}
	if(count_even==1)
	{
		printf("%d",temp1);
	}
	else
	{
		printf("%d",temp2);
	}
	
	return 0;
}
