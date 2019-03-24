

#include <stdio.h>
int main(void) 
{
	int n,rem,a[20],i,j,count=0,temp,pos=0;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%2;
		a[i]=rem;
		i++;
		count=count+1;
		n=n/2;
	}
	i=0;j=count-1;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	for(i=count-1;i>=0;i--)
	{
		pos++;
		if(a[i]==1)
		{
			printf("%d",pos);
			break;
		}
	}
	return 0;
}
