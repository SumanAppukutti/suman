#include <stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    char a[100];
    printf("enter the no.of char");
    scanf("%d",&n);
    printf("enter the char");
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    for(i=n-1;i>0;i++)
    {
        if(a[i]!='a'|| a[i]!='e'|| a[i]!='i'|| a[i]!='o' ||a[i]!='u')
        {
            printf("%c",a[i]);
        }
    }
    getch();
}
