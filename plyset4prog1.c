
#include <stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,count=0,count1=0;
    char a[100];
    printf("enter the num");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(')
        {
            count=count+1;
        }
        else if(a[i]==')')
        {
            count1=count1+1;
        }
    }
    if(count==count1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
