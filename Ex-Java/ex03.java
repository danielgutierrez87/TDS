/* Estruturas Condicionais: Modifique o programa anterior para verificar se a idade é
maior ou igual a 18 anos. Se for, exiba "Você é maior de idade"; caso contrário, exiba
"Você é menor de idade". */

import java.util.Scanner;

public class ex03 {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in); 

        int idade = 0;
                
        System.out.println("Digite sua idade: ");
        idade = scan.nextInt();

        if (idade >= 18) {
            System.out.println("Você é maior de idade!");
        } else {
            System.out.println("Você é menor de idade");
        } 
        if (idade < 0) {
            System.out.println("Você não existe!");
        }
    }
}
