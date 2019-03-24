

#include <stdio.h>
int main(void) 
{
	int num,a[100],i,j,temp,k,rem,count=0;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		a[i]=rem;
		i++;
		count++;
		num=num/10;
	}
	for(j=0;j<count;j++)
	{
		for(k=j+1;k<count;k++)
		{
			if(a[j]<a[k])
			{
				temp=a[j];
				a[j]=a[k];
				a[k]=temp;
			}
		}
	}
	for(j=0;j<count;j++)
	{
		printf("%d",a[j]);
	}
	return 0;
}
