/* Entrada e Saída de Dados: Escreva um programa Java que solicite ao usuário seu
nome e idade e, em seguida, exiba essas informações na tela. */

import java.util.Scanner;

public class ex01 {
    public static void main(String[] args) {

       Scanner teclado = new Scanner(System.in);

       System.out.print("Digite seu nome : ");
        String nome = teclado.nextLine();

        System.out.print("Digite sua idade: ");
        float idade = teclado.nextInt();

        System.out.print("Seu nome é " + nome + " e sua idade é " + idade); 
    }
}
