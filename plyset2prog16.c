#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,n,a[100],count=0;
   printf("enter the no.of int");
   scanf("%d",&n);
   printf("enter the numbers");
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
   for(j=i;j<n;j++)
   {
   if(a[i]==a[j])
   {
   count=count+1;
   }
   }
   if(count==1)
   {
   printf("%d",a[i]);
   }
   }
   getch();
   }
