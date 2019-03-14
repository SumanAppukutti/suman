

#include <stdio.h>
int main() 
{
    int n,a[10],i,j,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0,j=i+1;i<n,j<n;i++,j++)
	{
	   if(a[i]>a[j])
	   {
	       max=a[i];
	   }
	   else
	   {
	        max=a[j];    
	   }
	   printf("%d ",max);
	}
	return 0;
}
