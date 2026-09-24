//Remove all vowels from a string.
#include<stdio.h>
int main()
{
 int i;
 char str[100];
 printf("Enter a string");
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
  {
   if(str[i]!='a' && str[i]!='e' && str[i]!='o' && str[i]!='u' && str[i]!='i' && str[i]!='A' && str[i]!='E' && str[i]!='O' && str[i]!= 'U' && str[i]!='I')
   {
     printf("%c",str[i]);
   }
  }
 return 0;
}
