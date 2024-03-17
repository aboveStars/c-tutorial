#include <stdio.h>

int main()
{

  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  int index = 1;

  int result = 1;

  while (index <= number)
  {
    result = result * index;
    index++;
  }

  printf("Factorial of %d is: %d", number, result);

  return 0;
}