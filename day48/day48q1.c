//Check if one string is a rotation of another.
#include<stdio.h>
#include<string.h>
int main()
{
 int i;
 char a[100],b[100],c[100];
 printf("Enter two strings");
 scanf("%s%s",a,b);
 if(strlen(a)!=strlen(b))
  {
   printf("Not rotation");
  }
 else
  {
   strcpy(c,a);
   strcat(c,a);
   if(strstr(c,b))
    printf("Rotation");
   else
    printf("Not rotation");
  }
 return 0;
}
