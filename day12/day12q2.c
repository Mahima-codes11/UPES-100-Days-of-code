/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include<stdio.h>
int main()
{
 int e_bill,unit;
 printf("Enter no of units");
 scanf("%d",&unit);
 if(unit<=100)
 {
  e_bill=5*unit;
  printf("electricity bill is:- %d",e_bill);
 }
 else if(unit<=200)
 {
  e_bill=(5*100)+(unit-100)*7;
  printf("electricity bill is:- %d",e_bill);
 }
 else if(unit<=300)
 {
  e_bill=(5*100)+(7*100)+(unit-200)*10;
  printf("electricity bill is:- %d",e_bill);
 }
 else
 {
  e_bill=(5*100)+(7*100)+(10*100)+(unit-300)*12;
  printf("electricity bill is:- %d",e_bill);
 }
 return 0;
}
