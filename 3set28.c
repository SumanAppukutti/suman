#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n;
printf("enter the limimt");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the elements with index");
for(i=0;i<n;i++)
{
printf("%d\t%d\n",i,a[i]);
}
getch();
}
