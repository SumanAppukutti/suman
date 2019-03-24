

#include <stdio.h>
#include<string.h>
int main(void)
{
	char str[30];
	scanf("%[^\n]s",str);
	int i,j;
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
		 if(str[i]==str[j])
		 {
		 	str[j]=toupper(str[j]);
		 }
		}
		str[i]=toupper(str[i]);
	}
	printf("%s",str);
	
	return 0;
}
