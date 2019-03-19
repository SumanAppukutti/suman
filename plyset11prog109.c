#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,a[100],n,sum=0,sum1;
printf("enter the number");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("%d\t",sum);
sum1=sum;
for(i=n-1;i>0;i--)
{
sum1=sum1-a[i];
printf("%d\t",sum1);
}
getch();
}
