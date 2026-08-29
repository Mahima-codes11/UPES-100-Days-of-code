//Write a program to find the LCM of two numbers.
#include<stdio.h>
int main()
{
 int i,a,b;
 printf("Enter two nos");
 scanf("%d%d",&a,&b);
 for(i=1;;i++)
 {
  if(i%a==0 && i%b==0)
   {
     printf("LCM is %d",i);
     break;
   }
 }
 return 0;
}
