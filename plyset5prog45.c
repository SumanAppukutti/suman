#include <stdio.h>
#include<conio.h>
int main()
{
    int p,a,i,j,perimeter,area,flag=0;
	scanf("%d %d",&p,&a);
	for(i=1;i<=(p/2);i++)
	{
	    for(j=1;j<=(p/2);j++)
	{
	    perimeter=2*(i+j);
	    area=i*j;
	    if(perimeter==p && area==a)
	    {
	        printf("yes");
	        flag=1;
	        break;
	    }
	}
	if(flag==1)
	    break;
	}
	if(flag==0)
	{
	    printf("no");
	}
	return 0;
}
