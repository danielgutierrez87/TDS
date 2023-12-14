/* Fazer um programa que leia um número indeterminado de dados contendo
a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém 
o valor da idade igual a zero. Calcule e escreva a idade média deste grupo de indivíduos. */ 

#include <stdio.h>
#include <string.h>
int main() {
    
    int idade=1, individuos=0, somaIdades=0;
    float media=0.0;
        while (idade>0) {
            printf("Digite a idade de um indivíduo: ");
                scanf("%i", &idade);
                if (idade != 0) { 
                    individuos++; 
                }
        somaIdades = somaIdades+idade;
        }        
        
            media = somaIdades/individuos;
            printf("A média de idade deste grupo é %f anos.", media);
               
    return 0;
    
}