#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  int b;
  printf("Enter two numbers: ");
  while (1) {
    scanf("%d", &a);
    scanf("%d", &b);
    if (a <= b) {
      break;
    } else {
      printf("The first one should be less than the second. Enter again: ");
    }
  }
    if (a % 2 == 1) {
      printf("odd\n");
    } else {
      printf("even\n");
    }
    if (b % 2 == 1) {
      printf("odd\n");
    } else {
      printf("even\n");
    }
    if (a < 10) {
      int i;
      for (i = a; i < b; i++) {
        if (i == 1) {
          printf("one\n");
          }
        else if (i == 2) {
            printf("two\n");
          }
        else if (i == 3) {
              printf("three\n");
            }
        else if (i == 4) {
              printf("four\n");
          }
        else if (i == 5) {
          printf("five\n");
            }
        else if (i == 6) {
          printf("six\n");
              }
        else if (i == 7) {
          printf("seven\n");
            }
        else if (i == 8) {
          printf("eight\n");
              }
        else if (i == 9) {
          printf("nine\n");
                }

      }
    }

  return 0;
}
