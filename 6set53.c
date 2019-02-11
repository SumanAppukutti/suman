#include<stdio.h>
#include<conio.h>
void main()
{
  int t1[50],t2,i;
    char bn[50],s1[50];
    printf("Bus timetable system \n");
     printf("enter busname :\n");

    for(i=0;i<=4;i++)
    {
        scanf("%[^\n]s\n",bn[i]);
    }
    printf("enter the route:\n");
    for(i=0;i<=4;i++)
    {
    scanf("%[^\n]s\n",s1[i]);
}
printf("enter the time:");
for(i=0;i<=4;i++)
{
    scanf("%[^\n]d",t1[i]);

}
for(i=0;i<=4;i++){
printf("%s %s  %d",bn[i],s1[i],t1[i]);
}
getch();
}
