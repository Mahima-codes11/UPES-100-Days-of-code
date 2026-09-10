//Merge two arrays.
#include<stdio.h>
int main()
{
 int c[5],a[5],b[5],n1,n2,j,i;
 printf("Enter the no of elements in array A");
 scanf("%d",&n1);
 printf("Enter the elements of array A");
 for(i=0;i<n1;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the no of elements in array B");
 scanf("%d",&n2);
 printf("Enter the elements of array B");
 for(j=0;j<n2;j++)
 {
  scanf("%d",&b[j]);
 }
 for(i=0;i<n1;i++)
 {
  c[i]=a[i];
 }
 for(j=0;j<n2;j++)
 {
  c[i]=b[j];
  i++;
 }
 printf("Merged Array : \n");

 for(i=0;i<n1+n2;i++)
 {
  printf("%d\n",c[i]);
 }
 return 0;
}
