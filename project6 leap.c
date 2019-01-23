#include<stdio.h>
#include<conio.h>
void main()
{
 int year;
 printf("enter the year");
 scanf("%d",&year);
 if((year%4==0) && (year%100!=0) || (year%400==0))
 {
  printf("given year is leap");
 }
 else
 {
 printf("not leap year");
 }
 getch();
}
