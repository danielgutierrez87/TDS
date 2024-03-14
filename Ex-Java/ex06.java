/* Vetores: Crie um programa que solicite ao usuário que insira 5 números inteiros e
armazene-os em um vetor. Em seguida, exiba os números na ordem inversa em que
foram digitados. */

import java.util.Scanner;

public class ex06 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        
        int vetor[] = new int [10]; 

        for (int i = 1; i <= 5; i++) {
            System.out.println("Digite o " + i + " número: ");
            vetor[i] = s.nextInt();
        }
        System.out.println(vetor[5]+ " " + vetor[4] + " " + vetor[3] + " " + vetor[2] + " " + vetor[1]);
    }
}

 
        


