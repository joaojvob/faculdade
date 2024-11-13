package Atividade3;

public class Herois {

	String nome;
	String localDeOrigem;
	int forca;
	int folego;
	int resistencia;
	int inteligencia;
	int edpH;
	int edpNH;
	int pontosDeGuerraH;
	int pontosDeGuerraNH;
	
	public Herois(String N,String LC, int FC,int FL, int R, int I, int edpH,int edpNH,int pdgh,int pdgnh) {
		this.nome = N;
		this.localDeOrigem = LC;
		this.forca = FC;
		this.folego = FL;
		this.resistencia = R;
		this.inteligencia = I;
		this.edpH = edpH;
		this.edpNH = edpNH;
		this.pontosDeGuerraH = pdgh;
		this.pontosDeGuerraNH = pdgnh;
	}
	
	public Herois() {
		nome = "";
		localDeOrigem = "";
		forca = 0;
		folego = 0;
		resistencia = 0;
		inteligencia = 0;
		edpH = 0;
		edpNH = 0;
		pontosDeGuerraH = 0;
		pontosDeGuerraNH = 0;
	}
	


	public void voar() {
		
	}
	
	public void nadar() {
		
	}
	
	public void agredirPessoas() {
		
	
	}
	
	public void setNOME(String nome) {
		this.nome = nome;
	}

	public String getNome() {
		return nome;
	}
	
	
	public void setLocalDeOrigem(String ldc) {
		this.localDeOrigem = ldc;
	}

	public String getLocalDeOrigem() {
		return localDeOrigem;
	}
	
	
	public void setForca(int forca) {
		this.forca = forca;
	}

	public int getForca() {
		return forca;
	}
	
	
	public void setFolego(int folego) {
		this.folego = folego;
	}

	public int getFolego() {
		return folego;
	}
	
	public void setResistencia(int resistencia) {
		this.resistencia = resistencia;
	}

	public int getResistencia() {
		return resistencia;
	}
	
	public void setInteligencia(int inteligencia) {
		this.inteligencia = inteligencia;
	}

	public int getInteligencia() {
		return inteligencia;
	}
	
	
	public void setEPDH(int edp) {
		this.edpH = edp;
	}

	public int getEPDH() {
		return edpH;
	}
	
	public void setEPDNH(int edpNH) {
		this.edpNH = edpNH;
	}

	public int getEPDNH() {
		return edpNH;
	}
	
	public void setPDGH(int PDGH) {
		this.pontosDeGuerraH = PDGH;
	}

	public int getPDGH() {
		return pontosDeGuerraH;
	}
	
	public void setPDGNH(int PDGNH) {
		this.pontosDeGuerraNH = PDGNH;
	}

	public int getPDGNH() {
		return pontosDeGuerraNH;
	}
	
}
