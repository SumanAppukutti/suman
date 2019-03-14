#include <stdio.h>
int main(void) 
{
	char str[30];
	int i,count=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		count=count+1;
	}
	printf("%d",count);
	return 0;
}
