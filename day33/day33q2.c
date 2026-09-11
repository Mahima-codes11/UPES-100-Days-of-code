//Insert an element in a sorted array at the appropriate position.
#include<stdio.h>
int main()
{
 int a[10]={2,4,6,8,10};
 int n=5;
 int x,i;
 printf("Enter elements to insert");
 scanf("%d",&x);
 i=n-1;
 while(i>=0 && a[i]>x)
 {
  a[i+1]=a[i];
  i--;
 }
 a[i+1]=x;
 n++;
 printf("Array after insertion \n");
 for(i=0;i<n;i++)
 {
  printf("%d \n",a[i]);
 }
 return 0;
}
