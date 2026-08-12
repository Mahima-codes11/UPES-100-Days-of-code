//WAP to calculate area and circumference of a circle given its radius

#include<stdio.h>
int main()
{
 float pi=3.14;
 float radius;
 printf("Enter radius");
 scanf("%f",&radius);
 printf("Circumference is:- %f \n",2*pi*radius);
 printf("Area is:- %f \n",pi*radius*radius);
 return 0;
}
