#include<stdio.h>
#include<conio.h>
int main()
{
    char a[10],b[10];
    int i,j,count=0;
    scanf("%s %s",a,b);
    for(i=0,j=0;a[i]!='\0',b[i]!='\0';i++,j++)
    {
        if(a[i]==b[i])
        {
            count=1;
        }
        else
        {
            printf("no");
            count=0;
            break;
        }
    }
    if(count==1)
    {
    printf("yes...both strings are the same");
    }
   return 0;
}
