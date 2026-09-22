//Replace spaces with hyphens in a string.
#include<stdio.h>
int main()
{
 int j,i;
 char str[100];
 printf("Enter a string");
 scanf("%[^\n]",str);
 for(i=0;str[i]!='\0';i++)
  {
   if(str[i]==' ')
   {
    str[i]= '-';
   }
 }
  printf("%s\n",str);
 return 0;
}
