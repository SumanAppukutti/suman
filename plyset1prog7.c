
#include <stdio.h>
#include<conio.h>
void main()
{
    int i,j,len,k;
    char a[100];
    printf("enter the data");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        len=a[i];
        a[i]=a[i+1];
        a[i+1]=len;
        i=i+1;
    }
    printf("%s",a);
    getch();
}
