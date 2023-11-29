/* Que dada a idade de um nadador classifique-o em uma das seguintes categorias: infantil A = 5 - 7 anos; infantil B = 8-10 anos; juvenil A = 11-13 anos; juvenil B = 14-17 anos; adulto = maiores de 18 anos. */

 #include <stdio.h>

    int main () {
    int idade;

    printf("Digite a idade do atleta: ");
    scanf("%i", &idade);
   
    if (idade >= 5 && idade <= 7) {
        printf ("O atleta é da categia Infantil A");
    } 
    else { 
        if (idade >= 8 && idade <= 10) {
        printf("O atleta é da categoria Infantil B");
            } 
            else { 
                if (idade >= 11 && idade <= 13) {
                printf("O atleta é da categoria Juvenil A");
                  } 
                  else {
                    if (idade >= 14 && idade <= 17) {
                    printf("O atleta é da categoria Juvenil B");
                      }
                      else {
                      printf("O atleta é da categoria Adulto");
                    }
                }
            }         
    }
    return 0;
}