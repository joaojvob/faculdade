import java.util.Scanner;

public class Pessoa {
	String nome;
	String origem;
	String nascimento;

	public Pessoa() {
	
	}

	public void exibePessoa() {
		System.out.println(" " );
		System.out.println(" Nome       :  " + this.nome);
		System.out.println(" Origem     :  " + this.origem);
		System.out.println(" Nascimento :  " + this.nascimento);
		System.out.println(" " );

	}

	void cadastraPessoa() {

		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);

		System.out.println(" Informe o nome do integrante da banda  ");
		this.nome = entrada.nextLine();

		System.out.println(" De onde o integrante é ?   ");
		this.origem = entrada.nextLine();

		System.out.println(" Data de nascimento do integrante  ");
		this.nascimento = entrada.nextLine();

	}



}