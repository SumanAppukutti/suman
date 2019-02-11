#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,temp;
printf("enter number");
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
temp=a[1];
for(i=1;i<=10;i++)
{
if(temp<a[i])
{
temp=a[i];
}
}
printf("%d",temp);
getch();
}
