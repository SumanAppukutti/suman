#include <stdio.h>
#include<conio.h>
#include<string.h>
void main() 
{
	char str[20];
	scanf("%[^\n]s",str);
	int i,flag;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
	
	getch();
}
