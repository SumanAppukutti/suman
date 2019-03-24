

#include <stdio.h>
int main(void) {
	int n,flag;
	scanf("%d",&n);
	char a[n][100];
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i][100]==a[j][100])
			{
				flag=1;
				printf("yes");
				break;
			}
			if(flag==1)
			{
			break;
			}
		}
	}
	if(flag==0)
	{
	printf("no");
	}
	return 0;
}
