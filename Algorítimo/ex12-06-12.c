#include <stdio.h>

int main() {
int numero, impares=0, resto;

for (int i=0; i<=10; i++) {
    printf("Digite um número %i: ", i);
    scanf("%i", &numero);
    
    resto = numero%2;
    
    if (resto > 0) {
        impares++;
    }
}
printf("Total de ímpares: %i ", impares);

    return 0;
}

// Pedir dez numeros e mostrar quantos são ímpares 

