//Add two matrices.
#include<stdio.h>
int main()
{
 int a[5][5],b[5][5],c[5][5],i,j,n,m;
 printf("Enter order of matirx A and B");
 scanf("%d%d",&n,&m);
 printf("Enter elements of matrix a");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   scanf("%d",&a[i][j]);
  }
  printf("\n");
 }
 printf("Matrix A is \n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("%d",a[i][j]);
  }
  printf("\n");
 }
 printf("Enter elements of matrix B");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
 {
  scanf("%d",&b[i][j]);
 }
 printf("\n");
 }
 printf("Matrix B is \n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
   {
    printf("%d",b[i][j]);
   }
 printf("\n");
 }
 printf("Sum of matrix is \n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
   printf("%d",c[i][j]);  
  }
 printf("\n");
 }
 return 0;
}
