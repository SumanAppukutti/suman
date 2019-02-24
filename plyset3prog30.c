#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10],b[10];
	int k,i,count1=0,count2=0;
	scanf("%s %s",a,b);
	scanf("%d",&k);
	int n1=strlen(a);
	int n2=strlen(b);
	if(n1==n2)
	{
	    for(i=0;i<n1;i++)
	    {
	        if(a[i]==b[i])
	        {
	            count1++;
	        }
	        else
	        {
	            count2++;
	        }
	    }
	    if(count2==k)
	    {
	        printf("yes");
	    }
	    else
	    {
	        printf("no");
	    }
	}
	else
	{
	    printf("no");
	}
getch();
}
