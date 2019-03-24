


#include <stdio.h>
int main()
{
    int a[100],i,j,w[100],k,temp1,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(w[i]>w[j])
            {
                temp1=a[i];
                a[i]=a[j];
                a[j]=temp1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

return 0;
}
