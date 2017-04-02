#include <stdio.h>
#include <stdlib.h>

int main() {
  int digit;
  printf("Please, enter an integer from 0 to 23: ");
  scanf("%d", &digit);
  if (digit < 0 || digit > 23) {
    printf("Retry: ");
  }
  for (int i = 0; i < digit; i++) {
    for (int j = 0; j <= digit; j++) {
      if (j >= digit - (i + 1)) {
        printf("#");
      } else {
        printf(" ");
      }
    }
  printf("\n");
  }
  return 0;
}
