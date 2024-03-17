#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int binary_number;
  printf("Enter a binary number: ");
  scanf("%d", &binary_number);

  char binary_string[50];

  sprintf(binary_string, "%d", binary_number);

  int lenght = strlen(binary_string);

  int i;
  int result = 0;

  for (i = 0; i < lenght; i++)
  {

    int from_start_index = lenght - i - 1;

    char digit_in_char = binary_string[from_start_index];

    int digit_in_number = digit_in_char - '0';

    result += (pow(2, i) * digit_in_number);
  }

  printf("%d is equal to %d \n", binary_number, result);

  return 0;
}