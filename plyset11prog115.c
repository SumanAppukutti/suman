#include<conio.h>
#include<stdio.h>
void main()
{
int sum=0,a[100],b[100],c,i,j,k;
clrscr();
printf("enter the data");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
b[j]=a[i];
j++;
}
else
{
a[i-1]=0;
}
}
for(c=0;c<j;j++)
{
printf("%c",a[c]);
}
getch();
}
