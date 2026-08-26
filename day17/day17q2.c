//Write a program to check if a number is prime.
#include<stdio.h>
int main()
{
 int count=0,i,n;
 printf("Enter a no");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
{
 if(n%i==0)
  count++;
}
  if(count==2)
   printf("Prime no");
  else 
   printf("Not a prime no");

 return 0;
}
