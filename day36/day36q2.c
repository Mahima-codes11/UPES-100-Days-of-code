//Find the sum of all elements in a matrix.
#include<stdio.h>
int main()
{
 int sum=0,i,j,a[5][5],n,m;
 printf("Enter order of matrices");
 scanf("%d%d",&n,&m);
 printf("Enter elements");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
   {
    scanf("%d",&a[i][j]);
   }
  printf("\n");
 }
 printf("Matrix is: \n");
 for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
    printf("%d ",a[i][j]);
   }
  printf("\n");
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   sum=sum+a[i][j];
  }
 }
 printf("%d",sum);
 return 0;
}
