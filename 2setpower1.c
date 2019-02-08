#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,mul=1;
printf("enter the power and value");
scanf("%d %d",&a,&b);
for(i=1;i<=a;i++)
{
mul=mul*b;
}
printf("%d",mul);
getch();
}
