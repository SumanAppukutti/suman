#include <stdio.h>
#include<conio.h>
void main() 
{
int x,y,remainder,gcd;
printf("\n enter the first number:");
scanf("%d",&x);
printf("\n enter the second number:");
scanf("%d",&y);
do
{
remainder=x%y;
if(remainder==0)
break;
x=y;
y=remainder;
}while(remainder!=0);
gcd=y;
printf("\n the gcd of the given number is: %d",gcd);
getch();
}
