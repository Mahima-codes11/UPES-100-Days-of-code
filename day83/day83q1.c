//Create an enum for months and print how many days each month has.
#include<stdio.h>
enum Months{
     JANUARY,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER
    };
int main()
{
 enum Months month;
 for(month=JANUARY;month<=DECEMBER;month++)
 {
  switch(month)
  {
   case JANUARY:
   case MAY:
   case MARCH:
   case JULY:
   case AUGUST:
   case DECEMBER:
   case OCTOBER:
        printf("31 days\n");
        break;

   case APRIL:
   case JUNE:
   case SEPTEMBER:
   case NOVEMBER:
        printf("30 days\n");
        break;

   case FEBRUARY:
        printf("28 days\n");
        break;
   }
 }
 return 0;
}
