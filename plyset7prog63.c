

#include <stdio.h>
int main(void) 
{
	int n,i,j;
	scanf("%d",&n);
	int arr1[n],arr2[n];
	for(i=0;i<n;i++)
	{
		scanf("%d ",&arr1[i]);
	}
	printf("\n");
	for(j=0;j<n;j++)
	{
		scanf("%d ",&arr2[j]);
	}
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
			{
				if(arr1[i]==arr2[j])
				{
					printf("%d ",arr1[i]);
				}
			}
	}
	return 0;
}
