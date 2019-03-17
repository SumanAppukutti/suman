#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[100],k,n,count=0;
clrscr();
printf("enter the numbers");
scanf("%d",&n);
printf("enter the num");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
for(k=0;k<n;k++)
{
if(j!=k && a[j]==a[k])
{
if(a[j]!=0)
printf("%d",a[j]);
a[k]=0;
}
}
}
getch();
}

