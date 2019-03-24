#include<stdio.h>    
int main(){  
int a[10],n,i,c,b,count=0;    
printf("Enter the number to convert: ");    
scanf("%d %d",&c,&b);  
n=c|b;
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]); 
if(a[i]==1)
count++;
} 
printf("\n count=%d",count);
return 0;  
}  
