#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
printf("enter the intervels");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
for(j=2;j<=a/2;j++)
{
if(i%j==0)
{
printf("%d",i);
}
}
}
getch();
}
