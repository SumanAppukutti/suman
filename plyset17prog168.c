

#include <stdio.h>
int main()
{
    char a[100000];
    int i,c=0;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            c=a[i]-48;
            while(c)
            {
                printf("%c",a[i-1]);
                c--;
            }
        }
    }

    return 0;
}
