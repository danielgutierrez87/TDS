/* Que calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 7, ou a mensagem "reprovado", caso contrário. */

 #include <stdio.h>

    int main () {
    float nota1, nota2, nota3, media;

    printf("Digite a nota número 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota número 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota número 3: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    if (media >= 7) {
        printf ("Aprovado! Sua média foi de: %f", media);
    } 
    else { 
        printf("Reprovado! Sua média foi de: %f", media);
        }
    return 0;
}