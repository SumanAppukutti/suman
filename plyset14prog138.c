

#include <stdio.h>
int main(void) 
{
    int n,p=2,i,x=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x*p;
        if(x==n)
        {
            printf("yes..power of 2");
        }
    }
    if(x>n)
    {
        printf("not a power of 2");
    }
    return 0;
}
