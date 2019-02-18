#include<stdio.h>
#include<conio.h>
void main() 
{
	int n,a,d,i,sum=0;
	printf("enter the first term\n");
	scanf("%d",&a);
	printf("enter the difference\n");
	scanf("%d",&d);
	printf("enter the no of terms\n");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+(a+i*d);
    }
    printf("%d",sum);
	getch();
}
