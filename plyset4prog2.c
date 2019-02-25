
#include <stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,a[100],n,count=0;
    printf("enter the no.of num");
    scanf("%d",&n);
    printf("enter the num");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the search num");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
     if(a[i]==k)   
     {
        count=count+1;
     }
     }
     if(count>0)
     {
         printf("yes");
     }
     else
     {
         printf("no");
     }

    getch();
}
