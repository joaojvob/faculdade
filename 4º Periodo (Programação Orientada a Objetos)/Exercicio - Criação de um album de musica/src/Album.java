import java.util.Scanner;

public class Album {
	String titulo;
	int ano;
	Musica[] musicas;
	
	
	int totalDeMusicas =10;

	public Album() {
		this.titulo = "";
		this.ano = 0;
		this.musicas = new Musica[10];
	}

	void cadastraAlbum() {

	

		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);

		System.out.println(" Qual vai ser o nome do album ?  ");
		this.titulo = entrada.nextLine();

		System.out.println(" Informe o ano de publicação do album  ");
		this.ano = entrada.nextInt();

		
		for (int i = 0; i < totalDeMusicas; i++) {

			this.musicas[i] = new Musica();
			this.musicas[i].cadastraMusica();
		}
		

	}

	public void exibeAlbum() {
		int i;
		System.out.println(" " );
		System.out.println(" Album   :  " + this.titulo);
		System.out.println(" Ano     :  " + this.ano);
		System.out.println(" " );
		System.out.println("    Musicas do album  ");
		System.out.println(" " );
		
		for ( i=0;i < totalDeMusicas; i++) {
			this.musicas[i].exibeMusica();
		}

	}
}
