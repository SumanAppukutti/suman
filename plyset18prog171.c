


#include<string.h>
void main()
{
    char a[1000],b[100][100],t[100];
    int i,n,j=0,k=0,l,f,p;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]!=' ')
        {
            b[j][k]=a[i];
            k++;
        }
        if(a[i]==' ')
        {
            j++;
            k=0;
        }
    }
    for(i=0;i<j+1;i++)
    {
        l=strlen(b[i]);
        if(l==3)
        {
            if(b[i][0]=='a' && b[i][1]=='n' && b[i][2]=='d')
            {
               p=i;
                f=1;
            }
            else
            {
                f=0;
            }
        }
        if(f==1)
        {
            t=b[p+1];
            b[p+1]=b[p-1];
            b[p-1]=t;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%s",b[i]);
    }
   }
