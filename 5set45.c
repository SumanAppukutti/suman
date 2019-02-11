#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=0,n1;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
n1=n%10;
c++;
n=n/10;
}
printf("%d",c);
getch();
}
