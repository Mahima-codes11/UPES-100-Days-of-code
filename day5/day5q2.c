//WAP to input time in seconds and print it in hour:minutes:seconds format

#include<stdio.h>
int main()
{
 int time_in_seconds,hour,minutes,seconds;
 printf("Enter time in seconds");
 scanf("%d",&time_in_seconds);
 hour=(time_in_seconds)/3600;
 minutes=(time_in_seconds%3600)/60;
 seconds=(time_in_seconds)%60;
 printf("%02d:%02d:%02d",hour,minutes,seconds);
 return 0;
}
