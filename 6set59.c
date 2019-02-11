#include<stdio.h>
#include<conio.h>
void main()
{

    char s[50]={0};
    int i=0,c[50]={0},l=0,j=0,co=0,len,k=0;
    printf("enter the string :");

        scanf("%[^\n]c",s);

      printf("enter the lenght:");
    scanf("%d",&len);
    while(1)
    {

        if(s[i]==' '||s[i]=='\0')
        {
            if(s[i]=='\0')
            {


             if(l>0)
            {
                c[j++]=l;
                l=0;
            }
            break;
        }c[j++]=l;
        l=0;
    }
      else{

      l++;
    }
    i++;
    }
    printf("words lenth :\n");
    for(i=0;i<j;i++)
    {
printf("%d,  ",c[i]);
    }
printf("\b\b \n");
for(k=0;c[k]!='\0';k++)
{
    if(c[k]==len)
    {
        co++;
    }
}
printf("words of equal length: %d",co);
getch();  
}
