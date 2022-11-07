#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{
  if (argc != 2)
  {
    printf("%s", "Incorrect amount of arguments is provided!\n");
    return 1;
  }
  
  int N = atoi(argv[1]);
  if (N <= 0)
  {
    printf("%s", "Numebrs cannot be non-positive\n");
    return 1;
  }
  
  int swap;
  int numbers[N];
    for (int i = 0; i < N; ++i)
      {
        printf("%s %d: ", "Enter your number ", i);
         scanf("%d", &numbers[i]);
      }
  for (int i = 0; i < N; ++i)
    {
      for (int j = 0; j < N - 1 - i; ++j)
        {
          if (numbers[j] < numbers[j+1])
          {
            swap = numbers[j];
            numbers[j] = numbers[j+1];
            numbers[j+1] = swap;
          }
        }
    }
  printf("%s", "\nYour numbers, sorted in descending order: ");
  for (int i = 0; i < N; ++i)
    {
      printf("%d ", numbers[i]);
    }
  printf("\n");
}