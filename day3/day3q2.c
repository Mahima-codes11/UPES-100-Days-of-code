//WAP to swap two nos using third variable

#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter two nos a and b");
  scanf("%d%d",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("Now a is:- %d",a);
  printf("and b is:- %d",b);
  return 0;
}
