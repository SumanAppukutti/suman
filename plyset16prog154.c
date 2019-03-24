

#include <stdio.h>
int main(void)
{
	char str[30];
	int i,k;
	scanf("%s %d",str,&k);
	for(i=k-1;str[i]!='\0';i=i+k)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}
	printf("%s",str);
	return 0;
}
