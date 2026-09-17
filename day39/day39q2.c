//Find the sum of main diagonal elements for a square matrix.
#include<stdio.h>
int main()
{
 int sum=0, i,n,m,j,a[4][4];
 printf("Enter order of matrix");
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
 printf("Matrix is \n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("%d",a[i][j]);
  }
  printf("\n");
 }
 for(i=0;i<n;i++)
 {
   sum=sum+a[i][i];
  }
  printf("Sum of diagional elements is %d",sum);
return 0;
}
