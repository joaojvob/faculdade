import java.util.Scanner;

@SuppressWarnings("resource")

public class PrincipalExercicio5 {

	public static void main(String[] args) {

		Scanner entrada = new Scanner(System.in);

		int tamanho = 5;

		int maiorNumero = Integer.MIN_VALUE;

		int vetor[] = new int[tamanho];

		int i;

		int posicao = 0;

		for (i = 0; i < 5; i++) {

			System.out.println(" Insira um número: ");

			vetor[i] = entrada.nextInt();
		}

		for (i = 0; i < 5; i++) {

			if (vetor[i] > maiorNumero) {
				maiorNumero = vetor[i];
				posicao = i;

			} else {
				i++;
			}
		}

		System.out.printf(" O maior numero digitado é: %d na posição %d ", maiorNumero, posicao);

	}

}
