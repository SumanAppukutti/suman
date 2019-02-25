
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,count=0;
    char a[100];
    printf("enter the str");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
            }
        }
        if(count==1)
        {
            printf("%c",a[i]);
        }
    }
    getch();
}
