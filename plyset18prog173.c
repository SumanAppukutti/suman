


#include <stdio.h>
#include <string.h>
void main()
{
    char a[1000000],b[100000],c[10000];
    int i,j=0,l,l1,k=0,s=0;
    scanf("%[^\n]s",a);
    scanf("\n");
    scanf("%[^\n]s",b);
    l=strlen(a);
    l1=strlen(b);
    if(l>l1)
    {
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]!=b[j] && a[i]!=' ')
        {
                c[k]=a[i];
            k++;
            j++;
            s=1;
        }
        else
        {
            if(a[i]==' ' && k>0 && s==1 )
            {
                j=j-k;
                s=0;
            }
            else
            {
            j++;
            }
        }
       }
    }
    else
    {
       for(i=0;b[i]!=NULL;i++)
    {
        if(b[i]!=a[j] && b[i]!=' ')
        {
                c[k]=b[i];
            k++;
            j++;
            s=1;
        }
        else
        {
            if(b[i]==' ' && k>0 && s==1 )
            {
                j=j-k;
                s=0;
            }
            else
            {
            j++;
            }
        }
         }
    }
puts(c);
 }
