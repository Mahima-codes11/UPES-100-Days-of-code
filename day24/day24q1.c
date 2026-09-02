/*Write a program to print the following pattern:
*
**
***
****
*****
*/
#include<stdio.h>
int main()
{
 int i,j;
 char a;
 a='*';
 for(i=0;i<=4;i++)
 {
  for(j=0;j<=i;j++)
   {
     printf("%c",a);
   }
  printf("\n");
 }
 return 0;
}
