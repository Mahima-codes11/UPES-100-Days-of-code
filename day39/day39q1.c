//Check if the elements on the diagonal of a matrix are distinct.
#include<stdio.h>
int main()
{
 int x=1,i,j,n,m,a[4][4];
 printf("Enter order of matrix");
 scanf("%d%d",&n,&m);
 printf("Enter elements of matrix A \n");
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
  for(j=i+1;j<n;j++)
  {
   if(a[i][j]==a[j][i])
   {
    x=0;
   }
  }
 }
 if(x==1)
{
  printf("Diagonal elements are distinct");
}
 else
{
  printf("Diagonal elements are not distinct");
}
return 0;
}
