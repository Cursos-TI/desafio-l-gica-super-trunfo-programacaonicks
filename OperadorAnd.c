#include <stdio.h>

int main() {
  int a = -1;
  int b = 0;

  if (a > 0 && b > 0) {
    printf("Ambos os números são positivos\n");
  } else if(a < 0 && b < 0) {
        printf("Ambos os numeros sao negativos\n");
    } else {
    printf("Um número é positivo e o outro é negativo\n");
  }

  return 0;
}