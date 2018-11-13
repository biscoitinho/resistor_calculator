#include <stdio.h>
#include "minunit.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"
#include "resistor.h"

int tests_run = 0;

static char * test_brown_black_orange() {
  char input1[10] = "brown";
  char input2[10] = "black";
  char input3[10] = "orange";
   mu_assert("error, resistor value should be 10",
   colorCodes(input1, input2, input3) == 10);
   return 0;
}

static char * test_orange_orange_yellow() {
  char input1[10] = "orange";
  char input2[10] = "orange";
  char input3[10] = "yellow";
   mu_assert("error, resistor value should be 330",
   colorCodes(input1, input2, input3) == 330);
   return 0;
}

static char * test_yellow_WRONG_yellow() {
  char input1[10] = "yellow";
  char input2[10] = "WRONG";
  char input3[10] = "yellow";
   mu_assert("error, resistor value should be 330",
   colorCodes(input1, input2, input3) == 0);
   return 0;
}
static char * all_tests() {
   mu_run_test(test_brown_black_orange);
   mu_run_test(test_orange_orange_yellow);
   mu_run_test(test_yellow_WRONG_yellow);
   return 0;
}

int main(int argc, char **argv) {
   char *result = all_tests();
   if (result != 0) {
       printf("%s\n", result);
   }
   else {
       printf("ALL TESTS PASSED\n");
   }
   printf("Tests run: %d\n", tests_run);

   return result != 0;
}
