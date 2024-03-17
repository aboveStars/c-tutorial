#include <stdio.h>

int main()
{
  double first;
  double second;

  printf("Enter the two numbers A and B : ");
  scanf("%lf %lf", &first, &second);

  double sum = first + second;

  printf("Sum of A and B is: %f", sum);

  return 0;
}