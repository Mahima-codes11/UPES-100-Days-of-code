//WAP to swap two no without using a third variable

#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter two nos:- ");
 scanf("%d%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("Now nos after swaping");
 printf("a is: %d",a);
 printf("b is: %d",b);
 return 0;
}
