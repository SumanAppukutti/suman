#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char s1[100],s2[50];
int c;
printf("enter the string :");
scanf("%[^\n]s",&s1);
printf("enter the substring :");
scanf("%s",&s2);
c=countof(s1,s2);
printf("the total count %d",c);
}
int countof(char * s1,char *s2)
{
int i,j,f,c;
int sl1,sl2;
sl1=strlen(s1);
sl2=strlen(s2);
c=0;
for(i=0;i<=sl1-sl2;i++)
{
f=1;
for(j=0;j<sl2;j++)
{
if(s1[i+j] != s2[j])
{
f=0;
break;
}

}
if(f==1)
{
c++;

}
}
return c;
getch();
}
