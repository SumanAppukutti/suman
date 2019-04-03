
#include <stdio.h>
void main()
{
    int i,j,num,a[100],count=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
         for(j=i+1;j<num;j++)
         {
             if(a[i]==a[j])
             {
              count=count+1;
              a[j]='$';
             }
         }
         if(count==0)
         {
            if(a[i]!='$')
            printf("%d",a[i]);
         }
         count=0;
    }
    getch();
}
