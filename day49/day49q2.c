//Print initials of a name with the surname displayed in full.
#include<stdio.h>
int main()
{
 char first[100],last[100];
 printf("Enter first name");
 scanf("%s",first);
 printf("Enter last name");
 scanf("%s",last);
 printf("%c.%s",first[0],last);
 return 0;
}
