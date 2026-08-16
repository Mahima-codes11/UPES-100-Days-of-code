//WAP to input a character and check whether it is a vowel of consonant using if-else
#include<stdio.h>
int main()
{
  char i;
  printf("Enter a character");
  scanf("%c",&i);
  if(i=='a'|| i=='A'|| i=='e'|| i=='E'|| i=='i'|| i=='I'|| i=='o'||i=='O'||i=='u' ||i=='U')
    {
      printf("%c is a vowel",i);
    }
  else
    {
      printf("%c is not a vowel",i);
    }
  return 0;
}
