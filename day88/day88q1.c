//Print all enum names and integer values using a loop.
#include<stdio.h>
enum DAYS{
   MON,TUES,WED,THU,FRI,SAT,SUN};
int main()
{
 char *names[]={"MON","TUES","WED","THU","FRI","SAT","SUN"};
 enum DAYS day;
 for(day=MON;day<=SUN;day++)
 {
  printf("%s=%d\n",names[day],day);
 }
 return 0;
}
