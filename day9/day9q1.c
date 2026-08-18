//WAP to find the roots of a quadratic eq and categorize them
#include<stdio.h>
#include<math.h>
int main()
{
 float d,a,b,c,r1,r2;
 printf("Enter the coefficients"); 
 scanf("%f%f%f",&a,&b,&c);
 d=(b*b-4*a*c);
 if(d>0)
 {
  printf("Roots are real and distinct \n");
  printf("Root 1 is:- %f \n",r1=(-b+sqrt(d))/(2*a));
  printf("Root 2 is:- %f",r2=(-b-sqrt(d))/(2*a));
 }
 else if(d==0)
 {
  printf("Roots are real and equal \n");
  printf("Roots are:- %f",r1=-b/(2*a));
 }
 else
 {
   printf("Roots are imaginary and complex \n");
   printf("Imaginary part is: %f \n",r2=sqrt(-d)/(2*a));
   printf("Complex part is: %f \n",r1=-b/(2*a));
 }
return 0;
}
