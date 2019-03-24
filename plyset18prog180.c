

#include<stdio.h>
int main()
{
    int n,dec=0,b=1,rem,m=2;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        dec=dec+rem*b;
        n=n/10;
        b=b*2;
    }
    while(dec>m)
    {
        m=m*2;
    }
    if(dec<m)
    {
        printf("%d",m);
    }
}
