#include <stdio.h>
#include<conio.h>
void main() 
{
	char str[50],temp[50];
	int i,k,j;
	printf("\nenter the string:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]>str[j])
			{
				temp[k]=str[i];
				str[i]=str[j];
				str[j]=temp[k];
		}	}
	}
	printf("\n%s",str);
	getch();
}
