#include <stdio.h>

int main() {
  int a = 5;
  int b = -10;

  if (a > 0 || b > 0) {
    printf("Pelo menos um dos números é positivo\n");
  } else if ( a < 0 || b < 0)
    printf("Pelo menos um dos numeros é negativo\n");

return 0;
}