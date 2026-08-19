//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main()
{
 float a,b,c;
 printf("Enter the sides of triangle");
 scanf("%f%f%f",&a,&b,&c);
 if(a==b && a==c)
 {
  printf("It is an equilateral triangle with side %.2f",a);
 }
 else if(a==b || a==c && (b!=c))
 {
  printf("It is an isosceles triangle with two sides %.2f and third side %.2f",a,c);
 }
 else if(a!=b && a!=c && b!=c)
 {
  printf("It is a scalene triangle with sides %.2f , %.2f and %.2f",a,b,c);
 }
 else 
 {
  printf("Enter valid sides");
 }
 return 0;
}
