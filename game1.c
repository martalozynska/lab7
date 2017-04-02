#include <stdio.h>
#include <stdlib.h>

int main() {
    int width;
    int length;
    printf("Enter length: ");
    scanf("%d", &width);
    printf("Enter width: ");
    scanf("%d", &length);


    for  (int l = 0; l <length; l++){
        for (int w = 0; w <width; w++) {
            if (l == 0 || l == length - 1 || w % 2 == 1) {
              printf("*");
            } else {
              printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
