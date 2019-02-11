#include <stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char a[10];
	scanf("%s",a);

	int i,flag=0,m;
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(a[i]=='1' || a[i]=='0')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
		
	}
	if(flag==1)
	{
		printf("yes");
	}
  getch();	
}
