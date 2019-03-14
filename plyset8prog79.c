

#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int array[n],i,j,dif,max=0,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			dif=array[i]-array[j];
			if(dif>max)
			{
				max=dif;
			}
		}
	}
	printf("%d",max);
	return 0;
}
