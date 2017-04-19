#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cs50.h"
#include "cs50.c"

int main(void) {
  //printf("How much change is owed?\n");
  float input_rest;
  int coins = 0;
  do
  {
      printf("How much change is owed?\n");
      input_rest = GetFloat();
      if (input_rest <= 0) {
        printf("The rest must be positive\n");
      }
  }
  while (input_rest <= 0);
  int  int_rest = (int)round(input_rest*100);
  while (int_rest >= 25) {
    int_rest -= 25;
    coins += 1;
  }
  while (int_rest >= 10) {
    int_rest -= 10;
    coins += 1;
  }

  while (int_rest >= 5) {
    int_rest -= 5;
    coins += 1;
  }

  while (int_rest >= 1) {
    int_rest -= 1;
    coins += 1;
  }
  printf("%d\n",coins);
  return 0;
}
