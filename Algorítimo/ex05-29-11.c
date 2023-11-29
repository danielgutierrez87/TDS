/* Que ajude a calcular o custo ao consumidor de um carro novo, que é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um programa que leia o custo de fábrica de um carro e escreva o custo ao consumidor. */

 #include <stdio.h>

    int main () {
    int custoFabrica, custoDistri, custoImposto, valorFinal;

    printf("Digite o custo de fábrica do carro: ");
    scanf("%i", &custoFabrica);
 
    custoDistri =  custoFabrica*0.45;
    custoImposto = custoFabrica*0.28;
    valorFinal = custoFabrica + custoDistri + custoImposto;
    
    printf("O custo de fábrica é: %i\n ", custoFabrica);
    printf("O custo de fabrica + distribuição é: %i\n ", custoDistri);
    printf("O custo de fabrica + impostos é: %i\n ", custoImposto);
    printf("O preço final do carro é: %i", valorFinal);
   
    return 0;
    }
    