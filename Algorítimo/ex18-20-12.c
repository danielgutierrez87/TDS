*/ Dado um número indeterminado de funcionários, onde são fornecidos o Nome,
Número de Dependentes e o Número de Horas Trabalhadas. Pede-se um programa
que imprima, para cada funcionário, o seu Nome, Salário Bruto, Salário Líquido e o
Valor Descontado. A empresa paga R$ 12,50 por hora de trabalho e R$ 125,55 por
dependente, e ainda faz um desconto de 12% sobre o salário bruto. Pede-se ainda
que seja impresso o total de funcionários da empresa e o total gasto com salários.
Para encerrar a entrada dedados, considere o nome igual a “FIM”. */ 

#include <stdio.h>
#include <string.h>
int main() {
    
    float horasTrabalhadas=0, salarioBruto=0, salarioLiquido=0,descontos=0, totalSalarios=0;
    char nome[15];
    int numDependentes=0, totalFuncionarios=0;
   
    printf("Digite o nome do funcionário: ");
    scanf("%s", &nome);
    
    while (strcmp(nome,"FIM")!=0) {
         
         printf("Digite o número de dependentes: ");
            scanf("%i", &numDependentes);
        printf("Digite o número de horas trabalhadas: ");
             scanf("%f",&horasTrabalhadas);
         
         
         
        printf("Digite o nome do funcionário: ");
        scanf("%s", &nome);
    }

    return 0;
    
}