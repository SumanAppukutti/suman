#include<stdio.h>
#include<conio.h>
void main()
{
int N,A,D,i,sum=0;
scanf("%d %d %d",&N,&A,&D);
for(i=N;i>1;i--)
{
sum=sum+(A+(N-1)*D);
}
getch();
}
