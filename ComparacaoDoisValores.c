#include <stdio.h>

int main() {
  int numero1 = 3;
  int numero2 = 5;

  if (numero1 > numero2) {
    printf("numero1 é maior que numero2\n");
  } else {
    if (numero1 < numero2) {
        printf("numero1 é menor que numero2\n");
    }
  }

  return 0;
}