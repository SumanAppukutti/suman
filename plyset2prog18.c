#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int n,arr[26];
    scanf("%d\n",&n);
   int i,l,j,c=0;
    for(i=0;i<n;i++)
    {
        char s[1000];
        int count=0;
        gets(s);
        l=strlen(s);
        for(j=0;j<26;j++)
            arr[j]=0;
        for(j=0;j<l;j++)
        {
            arr[s[j]-'a']+=1;
        }

         for(j=0;j<26;j++)
            count=count+arr[j];

        if(count==6)
        {
            if(arr[0]==2 && arr[1]==1 && arr[11]==1 &&arr[8]==1 && arr[10]==1 )
            c++;
        }
    }
    printf("%d",c);
getch();
}
