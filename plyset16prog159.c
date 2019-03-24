
#include <stdio.h>

int main(void) 
{
	int n,m,i,rem,pro,a[20],count=0,count1=0;
	scanf("%d %d",&n,&m);
	pro=n*m;
	while(pro!=0)
	{
		rem=pro%2;
		a[i]=rem;
		i++;
		count=count+1;
		pro=pro/2;
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
