//Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h> 
int main()
{
 int i,n,rem,binary=0,place=1;
 printf("Enter no");
 scanf("%d",&n);
 while(n>0)
{
  rem=n%2;
  binary=binary+(rem*place);
  place=10*place;
  n=n/2;
 }
 printf("Binary equivalent for %d no is %d",n,binary);
 return 0;
}
