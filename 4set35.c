#include <stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char a[50];
	int i,count=0;
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' &&  a[i]<='9')
		count++;	
	}
	printf("%d",count);
	getch();
}
