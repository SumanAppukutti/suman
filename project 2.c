#include <stdio.h>
void main()
{
    int num;
    printf("enter the num");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("given num is even");
    }
    else if(num%2!=0)
    {
        printf("given num id odd");
    }
    else
    {
        printf("given num is invalid");
    }
    getch();
}
