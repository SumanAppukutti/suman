#include <stdio.h>
#include<conio.h>
void main()
{
    int i;
    char a[100];
    printf("enter the data");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='.')
        {
            printf("%c",a[i]);
        }
    }
    getch();
}
