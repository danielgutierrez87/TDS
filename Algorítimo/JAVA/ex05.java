/* Escreva um programa que solicite ao usuário que insira as 4 notas de um aluno em
cinco disciplinas diferentes. Armazene essas notas em um vetor e, em seguida, calcule
e exiba a média das notas de cada disciplina. */

import java.util.Scanner;

public class ex05 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double[][] notas = new double[5][4];

        for (int i = 0; i < 5; i++) {
            System.out.println("Insira as 4 notas da disciplina " + (i + 1) + ":");
            for (int j = 0; j < 4; j++) {
                notas[i][j] = scanner.nextDouble();
            }
        }

        for (int i = 0; i < 5; i++) {
            double soma = 0;
            for (int j = 0; j < 4; j++) {
                soma += notas[i][j];
            }
            double media = soma / 4;
            System.out.println("A média das notas da disciplina " + (i + 1) + " é: " + media);
        }

        scanner.close();
    }
}