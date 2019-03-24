#include<stdio.h>
int main()
{
	char a[20];
	int L;
	scanf("%s",a);
   	L=strlen(a);
   	if(L%2==1)
   	{
      printf("prime");
   	}
   	else
   	{
   		printf("not");
   	}
return 0;	
}
