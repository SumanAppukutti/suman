

#include<stdio.h>
int main()
{
   int n,k,i=0,t=0,f=1,g=1,m=0;
   scanf("%d %d",&n,&k);
       for(i=1;i<=n;i++)
       { f=f*i;
       }
       for(i=1;i<=k;i++)
       {
           g=g*i;
       }
       for(i=2;i<=g+f;i++)
       {
           if((g%i==0)&&(f%i==0))
           {
               m=i;
           }}
           printf("%d",m);
}
