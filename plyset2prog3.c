
#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
    int sum,sum1=0,a,rem;
    printf("enter the data");
    scanf("%d",&a);
    while(a>0)
    {
    rem=a%10;
    sum=pow(rem,2);
    a=a/10;
    sum1=sum+sum1;
    }
    printf("%d",sum1);
    getch();
}
