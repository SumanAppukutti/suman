

#include<stdio.h>
int main() 
{
   int n,k,i=0,t=0,a[10000];
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
       for(i=0;i<n;i++)
       {
           if(a[i]==k)
           {
              t++;
              break;
           }}
    if(t!=0)
    printf("%d",k);
    else
    {
        for(i=0;i<n;i++)
        {
        if(a[i]<k)
        {
            printf("%d ",a[i]);
        }
    }}
}
