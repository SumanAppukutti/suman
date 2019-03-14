
#include<stdio.h>
#include<conio.h>

void main()
{
long n;
int m,i=0,a[100],t,s[100],j,k,c=0;
clrscr();
printf("\nEnter the number : ");
scanf("%d",&m);
printf("\nEnter the number with %d digits : ",m);
scanf("%ld",&n);
i=m-1;
while(n!=0)
{
t=n%10;
a[i]=t;
i--;
n=n/10;
}
for(i=0;i<m;i++)
{
if(a[i]==1)
{
printf("\n%d",a[i]);
c=1;
}
else if(a[i]==0)
{
for(j=i+1;j<m;j++)
{
if(a[j]==0)
{
i=j;
break;
}
}
i=j;
}
}
if(c==0)
{
printf("\nNo Elements to Print!!!");
}
getch();

}
