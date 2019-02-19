
#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,len,k;
    char a[100],n[100];
    printf("enter the data");
    scanf("%s",a);
    len=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='I')
        n[i]=1;
        else if(a[i]=='V')
        n[i]=5;
        else if(a[i]=='X')
        n[i]=10;
    }
    k=n[len-1];
    for(i=len-1;i>0;i--)
    {
        if(n[i]>n[i-1])
        k=k-n[i-1];
        else
        k=k+n[i-1];
    }
    printf("%d",k);
    getch();
}
