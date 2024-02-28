import java.util.Scanner;

public class ex02 {
    public static void main(String[] args) {
        
        Scanner l = new Scanner(System.in);
        int qtd=0;
        System.out.println("Digite um numero: ");
        Integer numero = l.nextInt();

        for (int i = 1; i <= numero; i++) {  
            if (numero%i==0) { 
                qtd++;
                System.out.println("Divisivel por " + i ); 
            }
        }
        System.out.println("Divisivel " + qtd + " vezes");
    }
}

/* Desenvolva um programa que solicite ao usuário que insira um número e, em
seguida, exiba todos os divisores desse número. Utilize um loop `for` ou `while` para
encontrar os divisores.
 */
                     
        
                         
