/* Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 10
pessoas. Fazer um programa que calcule e escreva: A maior e a menor altura do
grupo. A média de altura das mulheres. O número de homens. */ 

#include <stdio.h>
#include <string.h>
int main() {
    
    float altura=0, mediaAltura=0, maiorAltura=0, menorAltura=99999, somaAlturaMulheres=0;
    char sexo[1];
    int totalHomens=0, totalMulheres=0;
    
    for (int i=0; i<=9; i++) {
    printf("Digite o sexo da pessoa (M / F): ");
    scanf("%s",&sexo);
    printf("Digite a altura do indivíduo: ");
    scanf("%f",&altura);
    
        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
       
        if (altura < menorAltura) {
            menorAltura = altura;
        }
        
        if (strcmp(sexo,"F") == 0) {
            totalMulheres = totalMulheres+1;
            somaAlturaMulheres = altura + somaAlturaMulheres;
        }
        
        if (strcmp(sexo,"M") == 0) {
            totalHomens = totalHomens+1; // DOIS JEITOS DE FAZER
        }
    }
    
     mediaAltura = somaAlturaMulheres / totalMulheres;
    
     printf("A maior altura do grupo é %f: ", maiorAltura);
     printf("A menor altura do grupo é %f: ", menorAltura);
     printf("A média de altura das mulheres é %f: ", mediaAltura);
     printf("O número de homens é %i: ", totalHomens);

    return 0;
}