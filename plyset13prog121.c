


#include<stdio.h>
#include<string.h>
int main()
{
    char a[100][100];
    int i,j,n,f=0,max=0,c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
     c=strlen(a[i]);
    if(c>max)
    {
     max=c;
    }
        
    }
    for(j=0;j<n;j++)
    {
    for(i=1;i<n;i++)
    {
        for(k=0;k<max;k++)
        {
    if(a[j][k]<=a[i][k])
    {
        f=1;
    }
    else
    {
        f=0;
        break;
    }
        }
}
if(f==1)
{
    printf("%s",a[j]);
    break;
}
}
return 0;
}
