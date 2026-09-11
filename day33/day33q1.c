//Search in a sorted array using binary search.
#include<stdio.h>
int main()
{
 int a[5]={2,4,6,8,10};
 int n=5;
 int key;
 int low=0,high=n-1;
 int mid,found=0;
 printf("Enter elements to search");
 scanf("%d",&key);
 while(low<=high)
 {
  mid=(low+high)/2;
  if(a[mid]==key)
  {
   printf("Element found at index %d",mid);
  found=1;
  break;
  }
  else if(key>a[mid])
  {
   low=mid+1;
  }
  else
  {
   high=mid-1;
  }
 }
 if(found==0)
 {
  printf("Element not found");
 }
 return 0;
}
