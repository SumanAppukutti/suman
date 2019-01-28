#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,count=0;
    printf("enter the num");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        count=count+1;
        num=num/10;
    }
    printf("%d",count);
    getch();
}
