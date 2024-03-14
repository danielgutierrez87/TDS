/* Estruturas de Repetição: Escreva um programa que solicite ao usuário um número
inteiro positivo e, em seguida, exiba todos os números de 1 até o número inserido
pelo usuário. */

import java.util.Scanner;

public class ex05 {
    public static void main(String[] args) {
        
        int num = 0; 

        Scanner s = new Scanner(System.in);

        System.out.print("Digite um número: ");
        num = s.nextInt();

        for (int i = 0; i <= num; i++) {
            System.out.println(i);
        }
    }
}
