/* Modifique o programa anterior para verificar se a soma dos números é maior que 10.
Se for, exiba "A soma é maior que 10"; caso contrário, exiba "A soma é menor ou
igual a 10". */

import java.util.Scanner;

public class ex04 {
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in); 

        int num1 = 0;
        int num2 = 0;
        int soma;
        
        System.out.println("Digite um número: ");
        num1 = scan.nextInt();

        System.out.println("Digite outro número: ");
        num2 = scan.nextInt();

        soma = num1+num2; 
        System.out.println("O valor da soma é: " + soma);
        
        if (soma > 10) {
            System.out.println("A soma é maior que dez!");
        } else {
            System.out.println("A soma é igual ou menor que dez!");
        }
    }
}
