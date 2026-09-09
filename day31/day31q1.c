//Search for an element in an array using linear search.
#include<stdio.h>
int main()
{
 int i,a[5],n,found,x;
 printf("Enter no of elements");
 scanf("%d",&n);
 printf("Enter the elements");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter element to search");
 scanf("%d",&x);
 for(i=0;i<n;i++)
 {
  if(a[i]==x)
 {
  found=1;
  break;
 }
 }
 if(found==1)
  printf("Element found");
 else
  printf("Element not found");
 return 0;
}
