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
    for(j=0;j<k;j++)
    {
        sum=sum+a[j];
    }
    printf("%d",sum);
    getch();
}
