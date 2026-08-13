//WAP to find and display the sum of first n natural no

#include<stdio.h>
int main()
{
 int sum,n,i;
 printf("Enter n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
 printf("Sum of first %d nos is:- %d",n,sum);
 return 0;
}
