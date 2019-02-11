#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter two numbers");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("%d\t%d",a,b);
getch();
}
