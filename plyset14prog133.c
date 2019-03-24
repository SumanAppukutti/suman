

#include <stdio.h>
int main(void) {
	int n,m,flag;
	scanf("%d %d",&n,&m);
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0 && b[i]<=m)
		{
				flag=1;
		}
		else
		{
			flag=0;
			printf("no");
			break;
		}
		
	}
	if(flag==1)
	{
		for(int i=0;i<n;i++)
		{
			if(b[i]==m)
			{
				printf("yes");
				break;
			}
		}
	}
	return 0;
}
