/* Crie um programa que simule o lançamento de um dado 100 vezes. Conte e exiba a
quantidade de vezes que cada face do dado foi sorteada. Você deve usar um `for`
para os lançamentos e estrutura de switch para somar cada quantidade. */


import java.util.Random;

public class ex03 {
    public static void main(String[] args) {
        Random rand = new Random();
        int[] contagemFaces = new int[6];

        for (int i = 0; i < 100; i++) {
            int resultado = rand.nextInt(6) + 1;
            switch (resultado) {
                case 1: contagemFaces[0]++; 
                break;
                case 2: contagemFaces[1]++; 
                break;
                case 3: contagemFaces[2]++; 
                break;
                case 4: contagemFaces[3]++; 
                break;
                case 5: contagemFaces[4]++; 
                break;
                case 6: contagemFaces[5]++; 
                break;
            }
        }
        for (int i = 0; i < 6; i++) {
            System.out.println("Face " + (i+1) + " foi sorteada " + contagemFaces[i] + " vezes.");
        }
    }
}