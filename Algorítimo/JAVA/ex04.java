/* Desenvolva um pequeno sistema Java, operado via console, que ofereça quatro
funcionalidades básicas: soma, divisão, multiplicação e subtração. O sistema deverá
solicitar ao usuário que escolha uma das funções disponíveis e, em seguida, a função
selecionada deverá pedir os números necessários para realizar a operação e exibir o
resultado. O sistema continuará a solicitar operações até que o usuário decida sair,
digitando a palavra "SAIR".

No método principal (main), deve haver apenas a exibição da mensagem de solicitação
da função a ser executada e o loop de repetição para manter o sistema em
funcionamento. */

import java.util.Scanner;

public class ex04 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String operacao;

        do {
            System.out.println("Escolha uma operação: soma, divisão, multiplicação, subtração ou SAIR para encerrar.");
            operacao = scanner.nextLine();

            if (!operacao.equalsIgnoreCase("SAIR")) {
                System.out.println("Digite o primeiro número:");
                double num1 = scanner.nextDouble();
                System.out.println("Digite o segundo número:");
                double num2 = scanner.nextDouble();

                switch (operacao.toLowerCase()) {
                    case "soma":
                        System.out.println("Resultado: " + (num1 + num2));
                        break;
                    case "divisão":
                        System.out.println("Resultado: " + (num1 / num2));
                        break;
                    case "multiplicação":
                        System.out.println("Resultado: " + (num1 * num2));
                        break;
                    case "subtração":
                        System.out.println("Resultado: " + (num1 - num2));
                        break;
                    default:
                        System.out.println("Operação inválida.");
                        break;
                }
                scanner.nextLine(); // consome a quebra de linha pendente
            }
        } while (!operacao.equalsIgnoreCase("SAIR"));

        scanner.close();
    }
}