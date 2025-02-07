#include <stdio.h>

int main() {
  int idade = 5;
  char* resultado;

  resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

  printf("Resultado: %s\n", resultado);

  return 0;
}