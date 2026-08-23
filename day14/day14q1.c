//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main()
{
 int no,i,sum=0,n;
 printf("Enter n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {
   no=2*i-1;
   sum=sum+no;
  }
   printf("Sum of first %d odd nos is:- %d",n,sum);
 return 0;
}
