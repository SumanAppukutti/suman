

#include <stdio.h>

int main(void) 
{
	char str[20];
	int i,j,flag=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			break;
		}
		
		
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
