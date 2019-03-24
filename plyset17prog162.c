

#include<stdio.h>
void main()
{
    int i,n,m;
    char a[20];
    printf("\n enter the num");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);

    }
    m=strlen(a);
    
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
    printf("\n yes");
    
}
