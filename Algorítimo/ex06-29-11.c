/* Que leia dois números inteiros e compare-os, mostrando na tela uma das mensagens abaixo:  - O primeiro valor é o maior  - O segundo valor é o maior  - Não existe valor maior, os dois são iguais. */

 #include <stdio.h>

    int main () {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%i", &num1);
    printf("Digite o segundo número: ");
    scanf("%i", &num2);
 
    if (num1 > num2){
        printf ("O número %i é o maior", num1);
    } else { 
        if (num2 > num1) {
        printf("O número %i é o maior", num2);
        } 
        else { 
           printf("Os números %i %i são identicos!", num1, num2);
        }    
    }
    return 0;
    }