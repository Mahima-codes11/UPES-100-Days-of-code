//Wap to calculate area and peri of a rectangle given its length and bredth

#include<stdio.h>
int main()
{
 int l,b;
 printf("Enter length and bredth of rect");
 scanf("%d%d",&l,&b);
 printf("Area is:- %d \n",l*b);
 printf("Perimeter is:- %d",2*(l+b));
 return 0;
}
