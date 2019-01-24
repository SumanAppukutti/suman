#include <stdio.h>
#include<conio.h>
void main()
{
    int num,i,sum=1;
    printf("enter the num");
    scanf("%d",&num);
    for(i=num;i>0;i--)
    {
        sum=sum*i;
    }
    printf("the factorial of given num is%d",sum);
    getch();
}
