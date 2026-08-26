//Write a program to check if a number is an Armstrong number.
#include<stdio.h>
int main()
{
 int original,n,sum=0,rem;
 printf("Enter a no");
 scanf("%d",&n);
 original=n;
 while(n!=0)
 {
  rem=n%10;
  sum=sum+rem*rem*rem;
  n=n/10;
 }
 if(original==sum)
  printf("Armstrong no");
 else
  printf("Not an Armstrong no");
 return 0;
}
