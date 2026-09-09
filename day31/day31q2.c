//Reverse an array without taking extra space.
#include<stdio.h>
int main()
{
 int i,a[5],n,b;
 printf("Enter no of elements in an array");
 scanf("%d",&n);
 printf("Enter elements");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n/2;i++)
 {
  b=a[i];
  a[i]=a[(n-1)-i];
  a[(n-1)-i]=b;
 }
 printf("Reversed array is ");
 for(i=0;i<n;i++)
 {
  printf("%d \n",a[i]);
 }
 return 0;
}
