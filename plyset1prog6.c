#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,l,k,j,count=0,count1=0;
    char a[100],b[100];
    printf("enter the two data");
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
                a[j]=0;
            }
        }
    }
    for(l=0;b[l]!='\0';l++)
    {
        for(k=l+1;b[k]!='\0';k++)
        {
            if(b[l]==b[k])
            {
                count1=count1+1;
            b[k]=0;
            }
        }
    }
    if(count==count1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
