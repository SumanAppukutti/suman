#include <stdio.h>
#include<string.h>
#include<conio.h>
void main() 
{
	char str[30];
	int n,i;
	printf("enter the string:");
	scanf("%s",str);
	n=strlen(str);
	if(n%2==0)
	{
		str[n/2]='*';
		str[(n/2)-1]='*';
	}
	else
	{
		str[n/2]='*';
	}
	printf("\n%s",str);
	getch();
}
