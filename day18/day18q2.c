//Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>
int main()
{
 int i,a,b;
 printf("Enter two nos");
 scanf("%d%d",&a,&b);
 for(i=a;i>=1;i--)
{
  if(a%i==0 && b%i==0)
   {
    printf("HCF is %d",i);
    break;
   }
}
 return 0;
}
