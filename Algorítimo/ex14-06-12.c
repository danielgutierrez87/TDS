// FUNÇÕES 
// MAIN EXECUTA OUTRAS FUNÇÕES
// EXERCICIO DAS 4 OPERAÇÕES

#include <stdio.h>

void oi() {
    char texto[] = "Sou uma função \n";
    printf("%s", texto);
}

    int soma(int a, int b) {
        int resultado;
        resultado = a + b;
        return resultado;
    }
    
    int sub (int a, int b) {
        int resultado;
        resultado = a - b;
        return resultado;
    }
    
    int divisao(int a, int b) {
        int resultado;
        resultado = a / b;
        return resultado;
    }
    
    int multi(int a, int b) {
        int resultado;
        resultado = a * b;
        return resultado;
    }
        
    int main() {
     
       int total;
        int v1, v2;
        printf("Digite valor: ");
        scanf("%i", &v1);
        printf("Digite valor: ");
        scanf("%i", &v2);
        total = soma(v1,v2);
        printf("%i \n", total);
   
        total = sub(v1,v2);
        printf("%i \n", total);
        
        total = divisao(v1,v2);
        printf("%i \n", total);
        
        total = multi(v1,v2);
        printf("%i \n", total);
        
        return 0;
    }