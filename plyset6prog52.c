#include<stdio.h>
#incude<conio.h>
void main()
{
  int i,j,tem,a[40],n,k;
  printf("\nEnter number");
  scanf("%d",&n);
  printf("\nEnter k value");
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        tem=a[i];
        a[i]=a[j];
        a[j]=tem;
      }
    }
  }
  
  printf("\nThe second smallest number is %d:",a[k-1]);
}
