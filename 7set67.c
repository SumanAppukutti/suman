#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n;
    scanf("%d",&n);
    
    n1=n+1;
    while(n1!=0)
    {
        if(n1%10==0)
        {
            printf("%d",n1);
            break;
        }
        n1++;
    }
  getch();
}
