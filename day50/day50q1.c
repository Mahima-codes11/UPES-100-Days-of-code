//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include<stdio.h>
int main()
{
 int dd,mm,yyyy;
 printf("Enter date in format dd/mm/yyyy");
 scanf("%d/%d/%d",&dd,&mm,&yyyy);
 char *month[]={" ","jan","feb","march","apr","may","jun","july","aug","sept","oct","nov","dec"};
 printf("Date in new format is %02d-%s-%04d",dd,month[mm],yyyy);
 return 0;
}
