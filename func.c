#include <stdio.h>

void hello(char *firstname, char *lastname)
{
  printf("Hello %s %s \n", firstname, lastname);
}

int main(int argc, char **argv)
{
  // init a name variable
  char name[4];
  //char firstname[10];
  //char lastname[10];
  // prompt user for input
  printf("What is your name? ");
  scanf("%p ", &name);
  printf("You entered %s\n", name);
  // scanf accepts input
  //scanf("%s %s", firstname, lastname);
  // print the results
  //printf("You entered %s %s \n", firstname, lastname);

  //hello(firstname, lastname);
  return 0;
}