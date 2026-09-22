//Count spaces, digits, and special characters in a string.
#include<stdio.h>
int main()
 {
  int i,spaces=0,digits=0,spch=0;
  char str[199];
  printf("Enter a string");
  scanf("%[^\n]",str);
  for(i=0;str[i]!='\0';i++)
  {
   if(str[i]==' ')
   {
    spaces++;
   }
  else if(str[i]>='0' && str[i]<='9')
  {
   digits++;
  }
  else if((str[i]>='a' && str[i]<='z' )|| (str[i]>='A' && str[i]<='Z') || (str[i]=='\n'))
  {
   continue;
  }
 else
  {
    spch++;
  }
 }
 printf("Spaces %d",spaces);
 printf("Digits %d",digits);
 printf("Special Character %d\n",spch);
 return 0;

}
