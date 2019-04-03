#include<conio.h>
#include<stdio.h>
void main()
{
int a[100],b[100],num,i,j=0,min,temp=0,k;
long int sum=0,mul=1;
clrscr();
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
if(a[i]==i)
{
b[j]=a[i];
j=j+1;
}
}
for(i=0;i<num;i++)
{
for(k=i+1;k<j;k++)
{
if(b[i]>b[k])
{
temp=b[k];
b[k]=b[i];
b[i]=temp;
}
}
}
for(i=0;i<j;i++)
{
printf("%d",b[i]);
}
getch();
}
