#include <stdio.h>
#include<conio.h>
void main()
{
    int i,count=0;
    char a[40];
    printf("enter the string");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        count=count+1;
    }
    for(i=count-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    getch();    
}
