//Reverse each word in a sentence without changing the word order.
#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,start;
 char a[100];
 printf("Enter a string");
 scanf("%[^\n]",a);
 for(i=0;i<=strlen(a);i++)
 {
  if(a[i]==' ' || a[i]=='\0')
  {
   for(j=i-1;j>=start;j--)
    printf("%c",a[j]);
   if(a[i]==' ')
    printf(" ");

   start=i+1;
  }
 }
 return 0;
}
