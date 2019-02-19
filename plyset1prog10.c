
#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,j,count=0,count1=0;
    char a[100],b[100];
    printf("enter the two element");
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])        
            {
                count=count+1;
            }
        }
    }
    for(i=0;b[i]!='\0';i++)
    {
        for(j=i+1;b[j]!='\0';j++)
        {
            if(b[i]==b[j])        
            {
                count1=count1+1;
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
