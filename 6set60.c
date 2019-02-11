#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int array[100],i;
int n,max,min;
clrscr();
printf("Enter the n:");
scanf("%d",&n);
printf("\n Enter the array values:");
for(i=0;i<n;i++)
scanf("%d",&array[i]);
max=array[0];
min=array[0];
for(i=0;i<n;i++)
{
if(array[i]>max)
max=array[i];
else
min=array[i];
}
printf("\n The lowest value is:%d",min);
printf("\n The highest value is:%d",max);
}
