/*wap that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100:Grade A
80-89:Grade B
70-79:Grade C
60-69:Grade D
below 60:Grade F*/
#include<stdio.h>
int main()
{
 int a;
 printf("Enter percentage");
 scanf("%d",&a);
 if(a>=90 && a<=100)
  {
    printf("Grade A");
  }
 else if(a>=80 && a<=89)
  {
    printf("Grade B");
  }
 else if(a>=70 && a<=79)
  {
    printf("Grade C");
  }
 else if(a>=60 && a<=69)
  {
    printf("Grade D");
  }
 else if(a<60)
  {
    printf("Grade F");
  }
 else
  {
    printf("%%age Not acceptable");
  }
 return 0;
}
