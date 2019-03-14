#include <stdio.h>
int main() {
	char str[50]="aay";
	char str1[50]="xxx";
	int i,j,count;
	for(i=0;str[i]!='\0';i++)
	{
	    for(j=0;str1[j]!='\0';j++)
	    {
    	        if(str[i]==str1[j])
    	        count++;
	    }
	}
	if(count>=1)
     printf("yes,common factor are there");
      return 0;
}
