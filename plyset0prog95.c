

#include <stdio.h>
int main(void) 
{
	int i,p,k,x;
	char str[30];
	scanf("%s %d %d",str,&p,&k);
	for(i=0;str[i]!='\0';i++)
	{
		if(i==p-1)
		{
			x=p-1;
			printf("%c",str[x+k]);
		}
	}
	return 0;
}
