#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,count=0,i;
printf("enter the num");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
count=count+1;
}
}
if(count==0)
{
printf("prime");
}
else
{
printf("not prime");
}
getch();
}
