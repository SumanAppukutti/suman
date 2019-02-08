#include<stdio.h>
#include<conio.h>
void main()
{
int a,mul=1,i;
printf("enter the num");
scanf("%d",&a);
for(i=a;i>0;i--)
{
mul=mul*i;
}
printf("%d",mul);
getch();
}
