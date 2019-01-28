#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0,k,a[50],j;
    printf("enter the array size");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value to add");
    scanf("%d",&k);
    for(j=a[k];j>=a[0];k--)
    {
        sum=sum+j;
    }
    getch();
}
