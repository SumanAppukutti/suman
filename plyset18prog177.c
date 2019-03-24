

#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,k,c=0,l=0,m=0,n=0,temp,x;
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    m++;
    
    
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            
        }
        
    }
    
    
    
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]!=' ')
            {
                b[l]=a[i];
                l++;
            }
            if(a[i]==' ')
            {
                x=i;
                for(j=0;j<l;j++)
                {
                    for(k=j+1;j<l;j++)
                    {
                        if(b[j]>b[k])
                        {
                            temp=b[j];
                            b[j]=b[k];
                            b[k]=temp;
                        }
                    }
                }
                for(j=0;j<l;j++)
                printf("%c",b[j]);
                l=0;
            }
        }
    

for(i=x;i<m;i++)
{
    for(j=i+1;j<m;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
    for(i=x;i<m;i++)
    {
        printf("%c",a[i]);
    }

    return 0;
}
