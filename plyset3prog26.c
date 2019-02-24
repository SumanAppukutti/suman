#include<stio.h>
#include<conio.h>
void main()
{
char str[20];
scanf("%s",str);
for(int i0;str[i]!='\0';i++)
{
if(str[i]>96)
{
str[i]=str[i]-32;
}
else if(str[i]<91)
{
str[i]=str[i]+32;
}
}
printf("%s",str);
getch();
}
