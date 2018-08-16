#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int arr[] = {2, 5, 6, 8, 93, 4};
  int arr2[6];

  arr2[0] = 2;
  arr2[1] = 5;
  arr2[2] = 6;
  arr2[3] = 8;
  arr2[4] = 93;
  arr2[5] = 4;

  int *anotherArr; //you are point to n address
  anotherArr = (int *)malloc(6 * sizeof(int));

  *(anotherArr + 0) = 2;
  *(anotherArr + 1) = 5;
  *(anotherArr + 2) = 6;
  anotherArr[3] = 8;
  *(anotherArr + 4) = 93;
  *(anotherArr + 5) = 4;

  printf("Numbers is %d\n", arr[3]);
  printf("Numbers is %d\n", *(arr + 3));

  printf("Numbers is %d\n", arr2[3]);
  printf("Numbers is %d\n", *(arr2 + 3));

  printf("Numbers is %d\n", anotherArr[3]);
  printf("Numbers is %d\n", *(anotherArr + 3));
  return 0;
}