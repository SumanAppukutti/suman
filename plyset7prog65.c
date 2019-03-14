
#include <stdio.h>
#include<conio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	int i,j,temp;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<n)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
