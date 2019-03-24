

#include <stdio.h>
int main(void) 
{
	int n,i,count=0,a[30],rem,count1=0;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%2;
		a[i]=rem;
		i++;
		count=count+1;
		n=n/2;
	}
	for(i=0;i<count;i++)
	{
		if(a[i]==1)
		{
			count1=count1+1;
		}
	}
	printf("%d",count1);
	return 0;
}
