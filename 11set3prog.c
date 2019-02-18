#include <stdio.h>
#include<string.h>
void main() 
{

char a[100];
int n,i;
    scanf("%[^\t\n]s",a);
    n=strlen(a);
    a[0]=a[0]-32;
    for(i=0;i<n;i++)
    {
      if(a[i]==' ')
      {
          a[i+1]=a[i+1]-32;
      }
    }
    printf("%s",a);
	
	getch();
}
