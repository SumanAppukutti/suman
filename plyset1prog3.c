
#include <stdio.h>
#include<conio.h>
void main()
{
    int i,count=0,a,b,rem,rev=1;
    printf("enter the data");
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
    rem=a%10;
    printf("%d",rem);
    a=a/10;
    }
    getch();
}
 
