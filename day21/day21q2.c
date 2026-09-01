//Write a program to check if a number is a perfect number.
#include<stdio.h>
int main()
{
 int n,i,sum=0;
 printf("Enter a no");
 scanf("%d",&n);
 for(i=1;i<n;i++)
 {
  if(n%i==0)
  {
    sum=sum+i;
  }
 }
 if(sum==n)
  printf("%d is a perfect no",n);
 else
  printf("%d is not a perfect no",n);
 return 0;
}
