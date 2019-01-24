#include <stdio.h>
#include<conio.h>
void main()
{
    int num,i,sum=1;
    printf("enter the num");
    scanf("%d",&num);
    if(num<=20)
    {
    for(i=num;i>0;i--)
    {
        sum=sum*i;
    }
    printf("the factorial of given num is%d",sum);
    }
    else
    {
        printf("given num is above 20");
    }
    getch();
}
