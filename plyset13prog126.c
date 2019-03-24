

#include <stdio.h>
int main(void) 
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i,j,count,b[n],m=0,count1=0,temp,l;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
				a[j]='+';
			}
		}
		if(count<k && a[i]!='+')
		{
			b[m]=a[i];
			m++;
			count1++;
		}
	}
	for(m=0;m<count1;m++)
	{
		for(l=m+1;l<count1;l++)
		{
			if(b[m]>b[l])
			{
				temp=b[m];
				b[m]=b[l];
				b[l]=temp;
			}
		}
	}
	for(m=0;m<count1;m++)
	{
		printf("%d ",b[m]);
	}
	return 0;
}
