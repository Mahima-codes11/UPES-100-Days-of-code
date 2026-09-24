   //Find the first repeating lowercase alphabet in a string.
#include<stdio.h>
int main()
 {
  int i,j;
  char str[100];
  printf("Enter a string");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
   if(str[i]>='a' && str[i]<='z')
    {
     for(j=i+1;str[j]!='\0';j++)
      {
       if(str[i]==str[j])
        {
         printf("First repeating lowercase alphabet is %c \n",str[i]);
         return 0;
        }
      }
    }
  }
    printf("No repeating lowercase alphabet found \n");
    return 0;
  }
