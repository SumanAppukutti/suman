#include<conio.h>
#include<stdio.h>
void main()
{
int a[100],i,j,n,sum=0,k,sum1=0;
printf("enter the num");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
for(k=j+1;k<j+2;k++)
{
sum=sum+a[j]+a[k];
}
  sum1=sum1+sum;
}
printf("%d",sum1);
getch();
}
