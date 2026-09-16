//Check if a matrix is symmetric.
#include<stdio.h>
int main()
{
 int a[5][5],x=1,i,j,n,m;
 printf("Enter order of matrix");
 scanf("%d%d",&n,&m);
 printf("enter elements of matrix A \n");
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
  for(j=0;j<m;j++)
  {
    if(a[i][j]!=a[j][i])
   {
    x=0;
   }
  }
 }
 if(x==1)
 {
  printf("symmetric");
 }
 else
 {
  printf("Not symmetric");
 }
 return 0;
}
