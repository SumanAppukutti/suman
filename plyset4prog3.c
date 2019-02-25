#include<stdio.h>
#include<conio.h>
void main()
{
   int mat[50][50],n,count=0,i,j;
   printf("enter the array size");
   scanf("%d",&n);
   for ( i=0; i<n; i++)
   {
       for ( j=0; j<n; j++)
       {
           scanf("%d",&mat[i][j]);
       }
   }
   for ( i=0; i<n; i++)
   {
       for ( j=0; j<n; j++)
       {
           if (mat[i][j] ==1)
           {
               if (( mat[i][j-1] == 0) &&( mat[i][j+1] == 0))
                   count++;
           }
       }
   }
   
   printf("Number of rectangular islands is %d",count);
 getch();  
}
