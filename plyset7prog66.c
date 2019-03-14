
#include <stdio.h>
#include<conio.h>
int main(void) {
	int n,k,count=1;
	scanf("%d %d",&n,&k);
	int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
				
			}
		}
		if(count==k)
		{
			printf("%d",a[i]);
			break;
		}
	}
return 0;
}
