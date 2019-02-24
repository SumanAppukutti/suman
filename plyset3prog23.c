#include <stdio.h>
#include<conio.h>
void main()
{
	int a[100],b[100],n,m,k,i,s,max,j;
	printf("\nEnter the first array size : ");
	scanf("%d",&n);
	printf("\nEnter the second array size : ");
	scanf("%d",&m);
	s=n+m;
	printf("\nEnter the first array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the second array elements : ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	k=0;
	for(i=n;i<s;i++)
	{
		a[i]=b[k];
		max=a[0];
		for(j=0;j<=i;j++)
		{
			if(a[j]>max)
			{
				max=a[j];
			}
		}
		printf("\nAfter adding %d the maximum element is %d.",b[k],max);
		k++;
	}
	getch();
}
