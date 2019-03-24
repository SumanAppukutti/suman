

#include <stdio.h>
int main(void) 
{
	int n,m,i,j,rem,pro,a[20],count=0,count1=0,temp,pos=0;
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
	
	i=0;j=count-1;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	for(i=0;i<count;i++)
	{
		pos++;
		if(a[i]==1)
		{
			count1++;
		}
		if(count1==2)
		{
			printf("%d",pos);
			break;
		}
	}
	return 0;
}
