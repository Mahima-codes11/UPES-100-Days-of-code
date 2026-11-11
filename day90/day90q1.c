//Define a struct with enum Gender and print person's gender.
#include<stdio.h>
enum Gender{
     MALE,FEMALE};
struct Person
{
 char name[30];
 enum Gender gender;
};
int main()
{
 struct Person p={"Mishti",FEMALE};
 printf("Name = %s\n",p.name);
 if(p.gender==MALE)
  printf("Gender = male \n");
 else
  printf("Gender = female \n");
 return 0;
}
