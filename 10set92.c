#include <stdio.h>
#include<Conio.h>
void main()
{
	int n,a,sum=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum=sum+a;
	}
	printf("%d",sum);
	
	getch();
}
