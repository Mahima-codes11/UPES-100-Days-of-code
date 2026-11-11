//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include<stdio.h>
enum CHOICES {
    ADD,SUBTRACT,MULTIPLY};
int main()
{
 int a,b;
 printf("Enter two nos");
 scanf("%d%d",&a,&b);
 enum CHOICES choice;
 for(choice=ADD;choice<=MULTIPLY;choice++)
{
 switch(choice)
 {
  case ADD:
  printf("Sum is: %d",a+b);
  break;
  case SUBTRACT:
  printf("Subtraction of two nos is: %d",a-b);
  break;
  case MULTIPLY:
  printf("Multiplication of two nos is: %d",a*b);
  break;
 }
 }
 return 0;
}
