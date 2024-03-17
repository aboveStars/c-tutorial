#include <stdio.h>

int main()
{

  char operator;
  printf("Enter an operator (+ , - , * , / ): ");
  scanf("%c", &operator);

  float operand1;
  printf("Enter First Operand: ");
  scanf("%f", &operand1);

  float operand2;
  printf("Enter Second Operand: ");
  scanf("%f", &operand2);

  float result;

  switch (operator)
  {
  case '+':
    result = operand1 + operand2;
    printf("%f", result);
    break;
  case '-':
    result = operand1 - operand2;
    printf("%f", result);
    break;
  case '*':
    result = operand1 * operand2;
    printf("%f", result);
    break;

  case '/':
    if (operand2 == 0)
    {
      printf("What are you trying to do genius ???");
      break;
    }
    result = operand1 / operand2;
    printf("%f", result);
    break;

  default:
    printf("You typed what!!!!");
  }

  return 0;
}