import java.util.Scanner;

public class PrincipalExercicio1 {

	public static void main(String[] args) {

		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);

		int a, b, c;
		int soma;

		System.out.printf("Informe o primeiro valor : ");

		a = entrada.nextInt();

		System.out.printf("Informe o segundo valor  : ");

		b = entrada.nextInt();

		System.out.printf("Informe o terceiro valor : ");

		c = entrada.nextInt();

		soma = b + c;

		if (a > soma) {

			System.out.println(" É possivel formar um triangulo");

		} else {

			System.out.println(" Não é possivel formar um triangulo");

		}

	}
}
