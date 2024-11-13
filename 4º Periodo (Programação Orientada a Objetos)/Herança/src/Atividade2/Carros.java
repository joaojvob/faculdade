package Atividade2;

public class Carros extends Veiculos{

	private String cor;
	private int cavalos;
	private int anoDeFabricacao;
	
	public Carros(String cor, int c, int f) {
		this.cor = cor;
		this.cavalos = c;
		this.anoDeFabricacao = f;
	}
	
	public Carros() {
		cor = "";
		cavalos = 0;
		anoDeFabricacao = 0;
	}
	

	public void verInformacoesCarros() {
		System.out.println("********* Informações *********");
		System.out.println(" Cor               : " + cor);
		System.out.println(" Potencia          : " + cavalos);
		System.out.println(" Ano de Fabricação : " + anoDeFabricacao);
		System.out.println("********************************");
	}

}
