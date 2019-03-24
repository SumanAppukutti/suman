

#include<stdio.h>
int main()
{
    char a[1000000];
    int i,j,c=0,n=0,s;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        if(a[i]%2!=0)
        {
            n++;
        }
    }
    if(n>0 && c>0)
    {
        s=n*c;
    }
    printf("%d",s);
    return 0;
}
