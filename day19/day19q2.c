//Write a program to find the sum of digits of a number.
#include<stdio.h>
int main()
{
 int n,i,sum=0,rem,place=1;
 printf("Enter no");
 scanf("%d",&n);
 while(n>0)
 {
   rem=n%10;
   sum=sum+rem;
   n=n/10;
 }
  printf("Sum of digits is: %d",sum);
  return 0;
}
   
