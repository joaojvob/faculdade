import java.util.Scanner;

public class Musica {
	String titulo;
	int duracao;

	public Musica() {
		

	}

	void cadastraMusica() {

		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);

		System.out.println(" Informe o nome da musica  ");
		this.titulo = entrada.nextLine();

		System.out.println("Informe a duração da musica  ");
		this.duracao = entrada.nextInt();

	}

	public void exibeMusica() {
		System.out.println(" " );
		System.out.println(" Nome    :  " + this.titulo);
		System.out.println(" Duração :  " + this.duracao);
		System.out.println(" " );

	}
}
