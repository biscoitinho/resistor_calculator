#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"
#include "resistor.h"

int main(void) {

  char input1[10], input2[10], input3[10];

  printf("Enter first color: ");
  scanf("%s", input1);

  printf("Enter second color: ");
  scanf("%s", input2);

  printf("Enter third color: ");
  scanf("%s", input3);

  colorCodes(input1, input2, input3);

  return 0;
 }
