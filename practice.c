#include <stdio.h>

int main(void)
{
  // a collections of even integers
  int evens[] = {2, 4, 6, 8, 10, 12, 14};
  int odds[10]; // allocate ten spaces, each space holds enough space for an integer

  /*
  printf("The size of a character %d\n", sizeof(char));
  printf("The size of a float %d\n", sizeof(float));
  printf("The size of an integer %d\n", sizeof(int));
  printf("The size of the collection %d\n", sizeof(evens));
  printf("The size of the one item in the collection, in this case, the first one %d\n", sizeof(evens[0]));
  printf("The size of the one item in the collection, in this case, the second one %d\n", sizeof(evens[1]));
  */

  // gets the length of the intgers
  // int len = sizeof(evens) / sizeof(int); // one way of getting the length
  int len_of_evens = sizeof(evens) / sizeof(evens[0]); // another way of getting the length

  printf("A COLLECTION OF EVENS\n");
  // we loop through the even collection of integers
  for (int i = 0; i < len_of_evens; i++)
  {
    // turn even element into odd and then put it into odds collection
    //odds[i] = evens[i] + 1;
    // we display each element in the evens collection
    printf("%d\n", *(evens + i)); // using dereferencing
  }
  /*
  int len_of_odds = sizeof(odds) / sizeof(int);

  printf("A COLLECTION OF ODDS\n");
  // we loop through the odds collection of integers
  for (int i = 0; i < len_of_odds; i++)
  {
    // we display each element in the odds collection
    printf("%d\n", odds[i]);
  }
  */
  // we make a new line here
  // printf("\n");

  // rpogram terminates successfully
  return 0;
}