#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a,b,n,count=0;
clrscr();
printf("enter the numbers");
scanf("%d %d",&a,&b);
scanf("%d",&n);
for(i=a;i<b;i++)
{
if(count<n)
{
printf("%d",i);
count++;
}
}
getch();
}

