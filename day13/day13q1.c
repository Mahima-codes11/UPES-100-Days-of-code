//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main()
{
 float a,b,i;
 printf("Enter 1 for addition \n");
 printf("Enter 2 for subtraction \n");
 printf("Enter 3 for multiplication \n");
 printf("Enter 4 for divison \n");
 printf("Enter 5 for remainder \n");
 scanf("%f",&i);
 printf("Enter two nos \n");
 scanf("%f%f",&a,&b);
 switch(i)
 {
  case 1:
  {
   printf("Addition of %d and %d is:- %f",a,b,a+b);
   break;
  }
  case 2:
  {
   printf("Subtraction of %d and %d is:- %f",a,b,a-b);
   break;
  }
  case 3:
  {
   printf("Product of %d and %d is:- %f",a,b,a*b);
   break;
  }
  case 4:
  {
   printf("Divison of %d and %d is:- %f",a,b,a/b);
   break;
  }
  case 5:
  {
   printf("Remainder of %d and %d is:- %f",a,b,a%b);
   break;
  }
  default:
  {
    printf("Enter no upto 5");
  }
}
  return 0;
}
