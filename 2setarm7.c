#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,c,count=0,rem,mul=1,sum=1;
printf("enter the value");
scanf("%d",&a);
b=a;
c=b;
while(a!=0)
{
rem=a%10;
count=count+1;
a=a/10;
}
for(i=0;i<count;i++)
{
rem=b%10;
for(j=0;j<=count;j++)
{
mul=mul*rem;
}
sum=sum*10+mul;
b=b/10;
}
if(c==sum)
{
printf("armstrong");
}
else
{
printf("not armstrong");
}
getch();
}



