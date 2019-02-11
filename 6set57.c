#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i,s1=0,s2=0,sum;
printf("Enter the limit:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if((i%2)!=0)
{
s1=s1+(i*i*i);
}
else
{
s2=s2+(i*i);
}
}
sum=s1+s2;
printf("Answer is:%d",sum);
getch();
}
