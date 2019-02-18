#include<stdio.h>
#include<conio.h>
int main()
{

int i,j,count;
int e,s=0;
clrscr();
printf("Enter the ending point:");
scanf("%d",&e);
for(i=0;i<=e;i++)
{
count=0;
for(j=1;j<=i;j++)
{
if((i%j)==0)
count++;
}
if(count==2)
s=s+i;
}
printf("\nThe sum is:%d",s);
return 0;
}
