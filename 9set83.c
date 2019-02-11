#include <stdio.h>
#include<conio.h>
void main() 
{
	int n1,n2,i;
	char sym;
	printf("\n enter the two numbers:\n");
	for(i=1;i<=4;i++)
	{
		scanf("%d %c %d",&n1,&sym,&n2);
		if(sym=='/')
		{
			printf("%d\n",n1/n2);
		}
		else
		{
			printf("%d\n",n1%n2);
		}
	}
getch();
}
