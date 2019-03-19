#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,a[100],n,sum=0;
printf("enter the number");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
sum=sum+a[j];
printf("%d\t",sum);
}
getch();
}
