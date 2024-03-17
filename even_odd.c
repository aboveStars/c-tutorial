#include <stdio.h>

int main()
{
  int number;
  printf("Please type a number: ");
  scanf("%d", &number);

  int modulo = number % 2;

  switch (modulo)
  {
  case 1:
    printf("%d is odd", number);
    break;
  case 0:
    printf("%d is even", number);
    break;
  default:
    printf("Error");
    break;
  }

  return 0;
}