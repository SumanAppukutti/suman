#include<stdio.h>
#include<conio.h>
void main()
{
int b[100],a,i,c,j;
printf("enter the size of the array");
scanf("%d",&a);
printf("enter the element");
for(i=0;i<a;i++)
{
    scanf("%d",&b[i]);
}
for(i=0;i<a;i++)
{
    for(j=i+1;j<=a;j++)
    {
        if(b[i]>b[j])
        {
            c=b[i];
            b[i]=b[j];
            b[j]=c;
        }
    }
}
printf("%d",b[i]);
getch();
}
