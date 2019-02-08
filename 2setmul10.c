#include<stdio.h>
#include<conio.h>
void main()
{
int a,mul=1,i;
printf("Enter the num");
scanf("%d",&a);
for(i=1;i<=5;i++)
{
mul=a*i;
printf("%d\t",mul);
}
getch();
}
