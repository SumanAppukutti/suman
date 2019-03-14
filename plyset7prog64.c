
#include <stdio.h>
#include<conio.h>
int main(void) 
{
	int n,k;
	scanf("%d %d",&n,&k);
	int array[n],i,j,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(array[i]>array[j])
		{
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
		}
	}
	for(i=0;i<n;i++)
	{
		if(array[i]<k)
		{
			printf("%d ",array[i]);
		}
	}
	return 0;
  
}
