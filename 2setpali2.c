#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum=1;
printf("enter the num");
scanf("%d",&a);
b=a;
while(a!=0)
{
rem=a%10;
sum=sum*10+rem;
a=a/10;
}
if(sum==b)
{
printf("palindrom");
}
else
{
printf("not palindrom");
}
getch();
}
