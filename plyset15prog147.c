

#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,j=0,k;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            b[j]=a[i];
            j++;
        }
        if(a[i]==' ')
        {
            for(k=j-1;k>=0;k--)
            {
                printf("%c",b[k]);
                b[k]='\0';
            }
            printf(" ");
            j=0;
        }
            
    }
    return 0;
}
