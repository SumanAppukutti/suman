#include <stdio.h>
#include<conio.h>
int main()
{
	signed int n;
	scanf("%d",&n);
	if(n>=-32768 && n<=32767)
	{
	    printf("INT");
	}
	else
	{
	    printf("LONG LONG");
	}
	return 0;
}
