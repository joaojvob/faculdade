import java.util.Scanner;

@SuppressWarnings("resource")

public class PrincipalExercicio3 {

	public static void main(String[] args) {

		Scanner entrada = new Scanner(System.in);

		double x;
		double y;

		System.out.println(" Informe um número para calcular o seu fatorial ");

		x = entrada.nextInt();

		y = x;

		while (x > 1) {
			y = y * (x - 1);
			x--;
			System.out.println(y);
		}

	}

}
