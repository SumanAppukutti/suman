

#incude<conio.h>
#include <stdio.h>
int main() 
{
	int a[10],b[10],c[10],temp,count=0,n,m,i,j;
	scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==a[j])
            {
                c[i]=a[i];
                count++;
                break;
            }
        }
    }
    for(i=0;i<count;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
        printf("%d ",c[i]);
    }

}
