#include <stdio.h>
#include<conio.h> 
void main() 
{
	char str[50],character;
	int i,j,count=1,max=1;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		if(str[i]==str[j])
		{
			count=count+1;
			if(count>max)
			{
				max=count;
				character=str[i];
			}
		}
 
	}
	printf("\n%c",character);
	getch();
}
  
