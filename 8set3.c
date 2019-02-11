#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the number:");
scanf("%d",&a);
printf("left and right numbers:");
scanf("%d%d",&b,&c);
if(a>b&&a<c)
{
	printf("yes");
}
else
{
	printf("no");
}
getch();
}
