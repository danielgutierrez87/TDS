/* Escreva um programa que solicite ao usuário que insira dois números inteiros e
realize a soma desses números. Em seguida, exiba o resultado da soma. */

import java.util.Scanner;

public class ex02 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in); 
        int num1;
        int num2;
        int soma;
        
        System.out.println("Digite um número: ");
        num1 = scan.nextInt();

        System.out.println("Digite outro número: ");
        num2 = scan.nextInt();

        soma = num1+num2; 
        System.out.println(soma);
    }
}    

    
    