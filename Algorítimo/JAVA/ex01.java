import java.util.Scanner;

public class ex01 {
    
    public static void main(String[] args) {
    
        int soma = 0;       
        int qtd=0;       
        float media; 
        Scanner l = new Scanner(System.in);   
        System.out.println("Digite um numero: ");  
        int numero = l.nextInt();
        while (numero >=0) {
            soma = soma + numero; 
            qtd++;
            System.out.println("Digite um numero: "); 
            numero = l.nextInt(); 
        }
        media = soma / qtd;
        System.out.println("Somou " + soma + " rodou " + qtd + "\n"); 
        System.out.println("Media: "+ media);
    }  
}

/* Escreva um programa que calcule a média de uma lista de números fornecidos pelo
usuário. O programa deve continuar solicitando números até que o usuário insira um
valor negativo, e então deve exibir a média dos números inseridos. Você pode utilizar
uma estrutura de while, utilizar uma variável para somar os valores lidos e uma
variável para somar a quantidade de vezes que foi executado. 
 */









                       
                     
                    
               