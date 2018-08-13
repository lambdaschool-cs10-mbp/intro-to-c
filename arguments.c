#include <stdio.h>
/*
int main(int argc, char *argv[])
{
  printf("Hello World!\n");

  return 0;
}
*/
int main(int argc, char **argv) // arguments count, arguments values
{
  char firstname[] = {'O', 'B', 'O', '\0'};
  char *lastname = "Agboghidi";
  char *favorite_super_hero = "Dead Pool";

  printf("%s %s favorite's super hero is %s \n", firstname, lastname, favorite_super_hero);

  printf("argc is: %d\n", argc);

  printf("We are are going to inspect the values\n");

  for (int i = 0; i < argc; i++)
  {
    printf("%d) %s\n", i + 1, argv[i]);
  }

  return 0;
}