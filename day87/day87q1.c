//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include<stdio.h>
enum ROLES{
     ADMIN,USER,GUEST};
int main()
 {
  enum ROLES roles;
  for(roles=ADMIN;roles<=GUEST;roles++)
  {
   switch(roles)
  {
   case ADMIN:
   printf("Admin access granted \n");
   break;

   case USER:
   printf("User access granted \n");
   break;

   case GUEST:
   printf("Guest access granted \n");
   break;
  }
  }
  return 0;
}
