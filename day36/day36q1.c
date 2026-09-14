//Read and print a matrix.
#include<stdio.h>
int main()
{
 int i,j,n,m,a[5][5];
 printf("Enter order of a matrix i.e. nXm");
 scanf("%d%d",&n,&m);
 printf("Enter elements of matrices");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   scanf("%d",&a[i][j]);
  }
  printf("\n");
 }
 printf("The matrix is: \n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d ",a[i][j]);
  }
 printf("\n");
 }
 return 0;
}
