//WAP to input three nos and find the largest among them
#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter three nos");
 scanf("%d%d%d",&a,&b,&c);
 if(a<b && c<b)
 {
  printf("%d is greatest",b);
 }
 else if(b<a && c<a)
 {
  printf("%d is greatest",a);
 }
 else if(a==b && a==c)
 {
  printf("All are equal");
 }
 else
 {
  printf("%d is greatest",c);
 }
 return 0;
}
