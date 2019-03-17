#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[100],n,min=0,b,sum=0;
clrscr();
printf("enter the numbers");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(j=0;j<n;j++)
{
if(min>a[j])
{
min=a[j];
}
b=j;
}
a[b]=0;
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("%d\n",sum);
getch();
}
