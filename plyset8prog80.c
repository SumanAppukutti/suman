

#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int array[n],i,j,dif,temp;
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
	int min=array[0];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			dif=array[i]-array[j];
			if(dif<min)
			{
				min=dif;
			}
		}
	}
	printf("%d",min);
	return 0;
}
