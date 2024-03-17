#include <stdio.h>
#include <math.h>

int main()
{

  int principal;
  printf("Enter the principal: ");
  scanf("%d", &principal);

  int time;
  printf("Enter the time: ");
  scanf("%d", &time);

  float rate;
  printf("Enter rate: ");
  scanf("%f", &rate);

  float compound = principal * pow(1 + rate / 100, time);

  printf("Compund Interest is: %f", compound);

  return 0;
}