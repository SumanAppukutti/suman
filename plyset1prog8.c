#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,j;
    char a[100];
    printf("enter the element");
    scanf("%[^\n]s",a);
     if(a[0]>'a' && a[0]<'z')
        {
            printf("%c",a[0]-32);
        }
        
    for(i=1;a[i]!='\0';i++)
    {
       printf("%c",a[i]);
    }
    getch();
}
