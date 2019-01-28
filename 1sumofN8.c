#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("enter the num");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    getch();
}
