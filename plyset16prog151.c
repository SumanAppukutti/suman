

#include <stdio.h>
int main(void)
{
	char str[30];
	scanf("%s",str);
	int count=0,flag=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='b')
		{
			flag=1;
		}
		else
		{
			count=count+1;
		}
	}
	if(flag==1 && count==1)
	{
		printf("yes");
	}
	else 
	{
		printf("no");
	}
	return 0;
}
