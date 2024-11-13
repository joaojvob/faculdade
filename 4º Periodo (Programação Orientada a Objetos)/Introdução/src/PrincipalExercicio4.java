

public class PrincipalExercicio4 {

	public static void main(String[] args) {

	

		int tamanho = 1001;

		int quantidade = 0;

		int soma = 0;

		int vetor[] = new int[tamanho];

		int i;

		for (i = 0; i < tamanho; i++) {
			vetor[i] = i;
			if (i % 2 != 0) {
				System.out.printf("%d,", i);
				soma = soma + vetor[i];
				quantidade++;
			}

		}
		System.out.println("\n Soma dos numeros impares      : " + soma);
		System.out.println("\n Quantidade de numeros impares : " + quantidade);

	}

}
