#include <stdio.h>

int main()
{

  int x;
  printf("Enter the value of x: ");
  scanf("%d", &x);

  int y;
  printf("Enter the value of y: ");
  scanf("%d", &y);

  int new_y = x;
  int new_x = y;

  x = new_x;
  y = new_y;

  printf("After swapping x = %d, y = %d", x, y);

  return 0;
}