
#include <stdio.h>
#include<conio.h>
int main(void) {
	int n,temp=0;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j;
	for(i=0;i<n;i++)
	{
		int count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
			}
			if(a[i]!=a[j])
			{break;
			}
		}
		if(count>temp)
		{
			temp=count;
		}
	}
	printf("%d",temp);
	return 0;
}
