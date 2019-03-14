

#include <stdio.h>
int main(void) 
{
	int n,i,rem,array[20],count=0;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%2;
		array[i]=rem;
		i++;
		count=count+1;
		n=n/2;
	}
	for(i=count-1;i>=0;i--)
	{
		printf("%d",array[i]);
	}
	
	return 0;
}
