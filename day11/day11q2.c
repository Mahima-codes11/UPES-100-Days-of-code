//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main()
{
  float cp,sp,p,l;
  printf("Enter cost price and selling price of the product");
  scanf("%f%f",&cp,&sp);
  if(sp>cp)
  {
   p=((sp-cp)/cp*100);
   printf("Profit percentage is:- %.2f%%",p);
  }
  else if(sp<cp)
  {
   l=((cp-sp)/cp*100);
   printf("Loss percentage is:- %.2f%%",l);
  }
  else
  {
   printf("No loss no profit");
  }
  return 0;
}
  
