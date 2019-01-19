#include <stdio.h>
void main()
{
    char alp;
    printf("enter the alphepete");
    scanf("%c",&alp);
    if(alp=='a'|| alp=='e' || alp=='i' || alp=='o' || alp=='u')
    {
        printf("given alp is vowel");
    }
    else
    {
        printf("given alp is constant");
    }
getch();
}
