

#include <stdio.h>
int main(void) 
{
	int num,i=0,j=0,sum=0,count=0,array[30],res,rem;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		res=(rem*(pow(2,i)));
		i++;
		array[j]=res;
		j++;
		count=count+1;
		num=num/10;
	
	}
	for(j=0;j<count;j++)
	{
		sum=sum+array[j];
	}
	printf("%d",sum);
	
	return 0;
}
