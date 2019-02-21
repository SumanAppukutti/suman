
#include <stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[100],n,l,temp=0;
    printf("enter the no.of inputs");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("shift position");
    scanf("%d",&n);
   for(j=0;j<n;j++)
    {
        temp=a[2];
        a[2]=a[1];
        a[1]=a[0];
        a[0]=temp;
    }
    for(i=0;i<l;i++)
    {
        printf("%d\t",a[i]);
    }
    getch(); 
}
