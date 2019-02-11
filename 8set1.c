#include<stdio.h>
#include<conio.h>
void main()
{
int rev=0,t;
char a;
printf("enter the string:");
scanf("%s",&a);
t=a;
while(t!='\0')
{
rev=rev*10;
rev=rev+t%10;
t=t/10;
}
if(a==rev)
{
printf("it is a palindrome");
}
else
{
printf("it is not a palindrome");
}
getch();
}
