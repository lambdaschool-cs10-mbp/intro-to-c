#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n = 3;

  FILE *filename = fopen("hello.txt", "w+");

  fprintf(stdout, "Hello World %d\n", 4);
  printf("Hello World %d\n", 4);

  fprintf(filename, "Hello World %d\n", 4);
  if (n == 3)
  {
    fprintf(stderr, "Hello Error World \n");
    exit(1);
  }
  return 0;
}