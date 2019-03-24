

#include <stdio.h>
#include<string.h>
int main() 
{
    char a[30],b[10];
    int n,n1,i,j;
	scanf("%[^\n\t]s",a);
	scanf("%s",b);
	n=strlen(a);
	n1=strlen(b);
	for(i=0;i<n;i++)
	{
	    if(a[i]==b[i] && a[i]!=' ')
	    {
	        flag++;
	        b[i++];
	    }
	}
	if(flag==n1)
	{
	    
	}
	return 0;
}
