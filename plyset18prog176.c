

#include <stdio.h>
int main(void) 
{
	char str1[30],str2[30];
	int i,j,flag=0,l1,l2;
	scanf("%s %s",str1,str2);
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1!=l2)
	{
		printf("false");
	}
	else
	{
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=0;str2[j]!='\0';j++)
		{
			if(str1[i]==str2[j])
			{
				flag=1;
			}
			
		}
	}
	if(flag==1)
	{
		printf("true");
	}
	if(flag==0)
	{
		printf("false");
		
	}
	}
	return 0;
}
