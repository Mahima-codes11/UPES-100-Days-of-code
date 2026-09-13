//Rotate an array to the right by k positions.
#include<stdio.h>
int main()
{
 int i,n,k,a[10],temp;
 printf("Enter no of elements");
 scanf("%d",&n);
 printf("Enter elements");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter k");
 scanf("%d",&k);
 while(k>0)
 {
  temp=a[n-1];
  for(i=n-1;i>0;i--)
 {
  a[i]=a[i-1];
 }
 a[0]=temp;
 k--;
 }
printf("Array after rotation");
for(i=0;i<n;i++)
 {
   printf("%d \n",a[i]);
 }
return 0;
}
