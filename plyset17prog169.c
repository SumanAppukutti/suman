


#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],i,j,count;
clrscr();
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
count=0;
if(a[i]!='$')
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
count++;
a[j]='$';
}
}
printf("%c%d",a[i],count+1);
}
}
getch();
}
