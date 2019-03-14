

#include <stdio.h>
int main(void) 
{
	int n,rem,array[20],i,count=0,sum;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		array[i]=rem;
		i++;
		count=count+1;
		n=n/10;
	}
	sum=array[0]+array[count-1];
	printf("%d",sum);
	return 0;
}
