

#include <stdio.h>
int main(void)
{
	char str[20];
	scanf("%s",str);
	int i,count=0,sub=1;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=64 && str[i]<=96)
		{
			str[i]=str[i]+32;
		}
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			count=count+1;
		}
	}
	for(i=1;i<=count;i++)
	{
		sub=sub*i;
	}
	printf("%d",sub);
	return 0;
}
