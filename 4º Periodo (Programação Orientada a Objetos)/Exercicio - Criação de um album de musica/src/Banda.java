import java.util.Scanner;

public class Banda {
	String nomeDaBanda;
	Album[] discos;
	Pessoa[] membros;

	public Banda() {
		this.nomeDaBanda = "";
		this.discos = new Album[3];
		this.membros = new Pessoa[5];

	}

	void cadastraBanda() {

		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);
		int i ;


		System.out.println(" Qual vai ser o nome da banda ?  ");
		this.nomeDaBanda = entrada.nextLine(); 
		
		for(i=0;i<5;i++) {
			this.membros[i] = new Pessoa();
			this.membros[i].cadastraPessoa();
		}
		
	
		
		for(i=0;i<3;i++) {
			this.discos[i] = new Album();
			this.discos[i].cadastraAlbum();
		}

	}

	
	public void exibeBanda() {
		int i ;
		System.out.println(" " );
		System.out.println(" Nome da banda :  " + this.nomeDaBanda);
		
		
		for ( i=0;i < 5; i++) {
			System.out.printf("\n\n INTEGRANTE [%d]  \n\n",i+1);
			this.membros[i].exibePessoa();
		}
	
		for ( i=0;i < 3; i++) {
			System.out.printf("\n\n ALBUM N[%d]  \n\n",i+1);
			this.discos[i].exibeAlbum();
		}

	}

}
