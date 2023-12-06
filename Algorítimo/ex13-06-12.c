// Leia quantos números for necessário até chegar a 500

#include <stdio.h>

int main() {
int numero=0, contagem=0, somaNumeros=0;

while (somaNumeros < 500) {
   printf("Digite um número: ");
   scanf("%i", &numero);
    somaNumeros = somaNumeros+numero;
    contagem++;
}

printf("Leu %i números ", contagem);

return 0;
}