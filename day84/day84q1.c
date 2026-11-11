//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include<stdio.h>
enum MESSAGE{
     SUCCESS,FAILURE,TIMEOUT
    };
int main()
{
 enum MESSAGE message;
 for(message=SUCCESS;message<=TIMEOUT;message++)
 {
  switch(message)
 {
  case SUCCESS:
  printf("You are successful \n");
  break;

  case FAILURE:
  printf("You are a failure\n");
  break;

  case TIMEOUT:
  printf("sorry your time is out \n");
  break;

 }
 }
 return 0;
}
