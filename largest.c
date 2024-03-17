#include <stdio.h>

int main()
{

  // int first;
  // printf("First Number: ");
  // scanf("%d", &first);

  // int second;
  // printf("Second Number: ");
  // scanf("%d", &second);

  // int third;
  // printf("Third Number: ");
  // scanf("%d", &third);

  int a, b, c;
  printf("Type Number a,b,c ");
  scanf("%d %d %d", &a, &b, &c);

  int largest;

  // if (a >= b & a >= c)
  // {
  //   largest = a;
  // }

  // if (b >= a & b >= c)
  // {
  //   largest = b;
  // }

  // if (c >= a & c >= b)
  // {
  //   largest = c;
  // }

  largest = a;

  if (largest < b)
    largest = b;
  if (largest < c)
    largest = c;

  printf("Largest number is: %d", largest);

  return 0;
}