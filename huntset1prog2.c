#include<conio.h>
#include<stdio.h>
void main()
{
int a[100],num,i,j,min,temp=0;
long int sum=0,mul=1;
clrscr();
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
for(j=i+1;j<num;j++)
{
if(a[i]>a[j])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
for(i=0;i<num;i++)
{
sum=sum+a[i]*mul;
mul=mul*10;
}
printf("%ld",sum);
getch();
}
