#include <stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
	char a[10];
	char k;
	int n,i,count=0;
	scanf("%s %c",a,&k);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if(a[i]==k)
	    {
	        count++;
	    }
	}
	printf("%d",count);
	return 0;
}
