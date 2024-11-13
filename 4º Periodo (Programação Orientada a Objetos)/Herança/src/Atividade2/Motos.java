package Atividade2;

public class Motos extends Veiculos{

	private String cor;
	private int cilindrada;
	private int anoDeFabricacao;
	
	public Motos(String cor, int c, int f) {
		this.cor = cor;
		this.cilindrada = c;
		this.anoDeFabricacao = f;
	}
	
	public Motos() {
		cor = "";
		cilindrada = 0;
		anoDeFabricacao = 0;
	}
	

	public void verInformacoesMotos() {
		System.out.println("********* Informações *********");
		System.out.println(" Cor               : " + cor);
		System.out.println(" Cilindrada        : " + cilindrada);
		System.out.println(" Ano de Fabricação : " + anoDeFabricacao);
		System.out.println("********************************");
	}

}
