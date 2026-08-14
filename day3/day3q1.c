//WAP to convert temperature from celsius to fahrenheit

#include<stdio.h>
int main()
{
 float temp,f;  
 printf("Enter temp in celsius");
 scanf("%f",&temp);
 f=(9.0/5.0*temp)+32; //f is temp in fahrenheit
 printf("Temp in fahrenheit is:- %f",f);
 return 0;
}
