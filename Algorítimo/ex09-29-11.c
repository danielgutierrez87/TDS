/* Que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se a média for menor que 5. */

 #include <stdio.h>

    int main () {
    float nota1, nota2, nota3, media;
    int codigo;

    printf("Digite o código do aluno: ");
    scanf("%i", &codigo);
    printf("Digite a nota número 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota número 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota número 3: ");
    scanf("%f", &nota3);
    
    
    if (nota1 > nota2 && nota1 > nota3) {
    printf ("A nota %f foi a mais alta e teve peso 4 e as demais peso 3", nota1);
       media = ((nota1*4)+(nota2*3)+(nota3*3))/10;
    } 
    else { 
        if (nota2 > nota1 && nota2 > nota3) {
        printf("A nota %f foi a mais alta e teve peso 4 e as demais peso 3", nota2);
        media = ((nota1*3)+(nota2*4)+(nota3*3))/10;
            } else {
            printf("A nota %f foi a mais alta e teve peso 4 e as demais peso 3", nota3);
            media = ((nota1*3)+(nota2*3)+(nota3*4))/10;
            }
        }
        
   if (media >= 7) {
       printf("\nAprovado! Sua média foi de: %f", media);
   } 
   else if (media < 7) {
       printf("\nReprovado! Sua média foi de: %f", media);
   }
    
    return 0;
}