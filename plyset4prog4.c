
#include <stdio.h>
#include<conio.h>
void main()
{
    int i,a[100],n=3;
    printf("enter the str");
    scanf("%s",a);
    printf("%c",a[0]);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[n])
        {
            printf("%c",a[i]);
        }
        n=n*2;
    }
    getch();
}
   
