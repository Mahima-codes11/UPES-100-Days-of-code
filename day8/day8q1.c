//WAP to input a character and check whether it is an uppercase,lowercase alphabet ,digit or special character
#include<stdio.h>
int main()
{
 char c;
 printf("Enter a character");
 scanf("%c",&c);
 if(c>='A' && c<='Z')
  {
    printf("UPPERCASE LETTER");
  }
 else if(c>='a' && c<='z')
  {
    printf("LOWERCASE LETTER");
  }
 else if(c>='0' && c<='9')
  {
    printf("DIGIT");
  }
 else
  {
    printf("SPECIAL CHARACTER");
  }
 return 0;
}
