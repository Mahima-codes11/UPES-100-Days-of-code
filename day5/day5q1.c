//WAP to calculate simple interest and compound interest for given principle,rate and time

#include<stdio.h>
#include<math.h>
int main()
{
 float p,r,t,amount,simple_interest,compound_interest; //p=principle,r=rate,t=time
 printf("Enter principle,rate and time");
 scanf("%f%f%f",&p,&r,&t);
 simple_interest=(p*r*t)/100;
 amount=p*pow((1+r/100),t);
 compound_interest=amount-p;
 printf("Simple interest is %f",simple_interest);
 printf("Compound interest is %f",compound_interest);
 return 0;
}
