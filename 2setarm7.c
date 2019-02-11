#include<stdio.h>
#include<conio.h>
void main()
{
    int num,v,result,digit;
    printf("enter the num value");
    scanf("%d",&num);
    v=num;
    while(v!=0);
    {
        digit=v%10;
        result+=digit*digit*digit;
        v=v/10;
    }
    if(result==num);
    printf("amstrong number");
}
else
{
    printf("not amstrong");
}
getch();
}
