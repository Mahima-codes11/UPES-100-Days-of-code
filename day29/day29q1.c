//Find the sum of array elements.
#include<stdio.h>
int main()
{
 int i,a[5],sum=0,n;
 printf("Enter no of elements\n");
 scanf("%d",&n);
 printf("Enter elements \n");
 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
 printf("Elements are: \n");
 for(i=0;i<n;i++)
 {
  printf("%d \n",a[i]);
 }
 printf("Sum of elements is: ");
 for(i=0;i<n;i++)
 {
  sum=sum+a[i];
 }
 printf("%d",sum);
 return 0;
}
