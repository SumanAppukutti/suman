

#include<stdio.h>
#include<conio.h>
void main()
{
int j=0,i,n,m,a[100],t,b[100];
clrscr();
printf("\nEnter the size of array 1 : ");
scanf("%d",&n);
printf("\nEnter the size of array 2 : ");
scanf("%d",&m);
printf("\nEnter the array 1 elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the arrray 2 elements : ");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=n;i<n+m;i++)
{
a[i]=b[j];
j++;
}
for(i=0;i<n+m;i++)
{
for(j=i+1;j<n+m;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("\nThe sorted order after merging array1 and array2 is : ");
for(i=0;i<n+m;i++)
{
printf("\n%d",a[i]);
}
getch();
}
