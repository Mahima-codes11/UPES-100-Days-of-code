//Find the maximum and minimum element in an array.
#include<stdio.h>
#include<math.h>
int main()
{
 int i,n,a[5],max,min;
 printf("Enter no of elements");
 scanf("%d",&n);
 printf("Enter elements \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Maximum element in an array is: \n");
 max=a[0];
 for(i=1;i<n;i++)
 {
  max=fmax(max,a[i]);
 }
 printf("%d \n",max);
 printf("Minimum element in an arrays is: \n");
 min=a[0];
 for(i=1;i<n;i++)
 {
  min=fmin(min,a[i]);
 }
 printf("%d",min);
 return 0;
}
