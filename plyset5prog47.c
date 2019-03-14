#include <stdio.h>
#include<conioh.h>
void main()
{
    int a,b,c,sum=0;
	  scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180)
    {
        printf("yes..it forms traingle");
    }
    else
    {
        printf("they cant be the interior angles of the triangle");
    }
	return 0;
}
