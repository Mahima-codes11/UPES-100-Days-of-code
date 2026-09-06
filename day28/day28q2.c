//Read and print elements of a one-dimensional array.
#include<stdio.h>
int main()
{
 int i,j,a[5],n;
 printf("Enter no of elements");
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
 return 0;
}
