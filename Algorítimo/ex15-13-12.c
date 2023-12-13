/* Elaborar um programa que possibilite calcular a área total de uma residência 
(sala, cozinha, banheiro, quartos, área de serviço, quintal, garagem, etc.) 
O programa deve solicitar a entrada do nome, a largura e o comprimento de um 
determinado cômodo. Em seguida, deve apresentar a área do cômodo lido e também 
uma mensagem solicitando do usuário a confirmação de continuar calculando novos 
cômodos. Caso o usuário responda N (não), o programa deve apresentar o valor 
total acumulado da área residencial. */ 

#include <stdio.h>
#include <string.h>
int main() {
    
    float largura=0, comprimento=0, areaDoComodo=0, total=0;
    char comodo[10];
    char resposta[]="S";
        
        while (strcmp(resposta,"S")==0) {
        printf("Digite o nome do comodo: ");
            scanf("%s", &comodo);
         printf("Digite a largura desse comodo: ");
            scanf("%f", &largura);
        printf("Digite o comprimento desse comodo: ");
            scanf("%f", &comprimento);
    
        areaDoComodo = largura*comprimento;
        total = total + areaDoComodo;
    
        printf("Deseja continuar calculando? S/N ");
        scanf("%s",&resposta);
        }
 
    printf("A área total da casa é de %f m2: ", total);
    return 0;
}