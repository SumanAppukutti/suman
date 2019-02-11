#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int l,i,sum=0;
printf("Enter the string");
scanf("%s",str);
l=strlen(str);
for(i=0;i<l;i++)
{
  if(str[i]=='@'||str[i]=='*'||str[i]=='.'||str[i]=='#'||str[i]=='&'||str[i]=='^')
  {
    sum=sum+1;
  }
}
printf("Special character:%d",sum);
getch();
}
