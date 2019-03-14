

#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i+1]<a[i])
		{
			printf("%d",a[i]);
			break;
		}
	
	}
	
return 0;
}
