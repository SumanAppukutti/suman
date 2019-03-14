

#include <stdio.h>
int main(void) 
{
	int n,array[20],i,j,rem,count=0,flag=0;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		array[i]=rem;
		i++;
		count=count+1;
		n=n/10;
	}
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(array[i]==array[j])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
