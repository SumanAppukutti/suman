#include <stdio.h>
#include<conio.h>
void main() 
{
	float l,b,a;
	printf("enter the length and breadth values of the farm:");
	scanf("%f %f",&l,&b);
	a=l*b;
	printf("\n%0.5f",a);
	getch();
}
