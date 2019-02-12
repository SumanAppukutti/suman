#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,count=1;
printf("Enter the number");
scanf("%d",&a);
for(i=2;i<a;i++)
{
if(a%i==0)
 count++;
 }
 if(count!=1)
 {
 printf("yes");
 }
 else
 {
 printf("No");
}
getch();
}
