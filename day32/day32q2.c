//Find the digit that occurs the most times in an integer number.
#include<stdio.h>
int main()
{
 int a[10],i,n,j;
 int count,max=0,digit=0;
 printf("Enter the no of elements in array");
 scanf("%d",&n);
 printf("Enter elements \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<=9;j++)
  {
   count=0;
   int num=a[i];
   while(num>0)
  {
   if(num%10==j)
   count++;
   num=num/10;
  }
 if(count>max)
  {
   max=count;
   digit=j;
  }
 }
 }
 printf("Most occurring digit=%d",digit);
 return 0;
}
