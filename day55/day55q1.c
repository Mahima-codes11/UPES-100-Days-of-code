//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include<stdio.h>
int main()
{
 int n,j,i,count,found=0;
 printf("Enter size of array");
 scanf("%d",&n);
 int a[n];
 printf("Enter elements");
 for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
 for(i=0;i<n;i++)
{
 count=0;
  for(j=0;j<n;j++)
  {
   if(a[i]==a[j])
  {
   count++;
  }
 }
 if(count>n/2)
 {
  printf("Majority element=%d",a[i]);
  found=1;
  break;
 }
}
if(found==0)
 {
  printf("-1");
 }
 return 0;
}
