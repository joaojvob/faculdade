package Atividade3;

public class NHumanos extends Herois{

	String poderes;
	String especie;
	
	public NHumanos(String P,String E, String nome,String LocalDeOrigem, int forca, int folego, int resistencia, int inteligencia,int edpH,int edpNH, int pdgH,int pdgNH) {
		super(nome, LocalDeOrigem, forca, folego, resistencia, inteligencia,edpH,edpNH,pdgH,pdgNH);
		this.poderes = P;
		this.especie = E;
	}
	
	public NHumanos() {
		poderes = "";
		especie = "";
	}
	
	
	public void setPoderes(String poderes) {
		this.poderes = poderes;
	}

	public String getPoderes() {
		return poderes;
	}
	
	public void setEspecie(String especie) {
		this.especie = especie;
	}

	public String getEspecie() {
		return especie;
	}
	
	
	
	
	public void voar() {
		
	}
	
	public void nadar() {
		
	}
	
	public void agredirPessoas() {
		
	}

}
