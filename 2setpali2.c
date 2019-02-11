#include<stdio.h>
#include<conio.h>
void main()
{
int n,temp=0,n1,c;

printf("enter the number");
scanf("%d",&n);
c=n;
while(n>0)
{
n1=n%10;
temp=temp*10+n1;
n=n/10;
printf("%d\n",temp);
}
if(temp==c)
{
    printf("\npalindrome");
}
else
{
    printf("not a palindrome");
}
}
