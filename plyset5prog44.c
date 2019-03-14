#include <stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int n,k,i,j;
	char a[10],temp;
	scanf("%s",a);
	n=strlen(a);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
	    temp=a[n-1];
        for(j=n-2;j>=0;j--)
 	{
	   a[j+1]=a[j];
	}
	    a[0]=temp;
	   
	} printf("%s",a);
	getch();
}
