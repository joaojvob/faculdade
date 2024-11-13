package Atividade3;

public class Humanos extends Herois{

	String nomeHumano;
	String IPR;
	double capitalFinanceiro;
	
	
	
	
	public Humanos(String NH, String identidadeRevelada,double salario, String nome,String LocalDeOrigem, int forca, int folego, int resistencia, int inteligencia,int edpH,int edpNH,int pdgH,int pdgNH) {
		super(nome, LocalDeOrigem, forca, folego, resistencia, inteligencia,edpH,edpNH,pdgH,pdgNH);
		this.nomeHumano = NH;
		this.IPR = identidadeRevelada;
		this.capitalFinanceiro = salario;
	}
	
	public Humanos() {
		nomeHumano = "";
		IPR = "";
		capitalFinanceiro = 0;
	}
	
	
	public void setNomeHumano(String nome) {
		this.nomeHumano = nome;
	}

	public String getNomeHumano() {
		return nomeHumano;
	}
	
	public void setIPR(String IPR) {
		this.IPR = IPR;
	}

	public String getIPR() {
		return IPR;
	}
	
	
	public void setCapital(double capitalFinanceiro) {
		this.capitalFinanceiro = capitalFinanceiro;
	}

	public double getCapital() {
		return capitalFinanceiro;
	}
	
	

	public void exibir() {
		
		System.out.println(" Nome verdadeiro  " + nome);
					
		System.out.println(" Nome de heroi   "+nomeHumano);
			
		System.out.println(" Local de origem "+localDeOrigem);	
		
		System.out.println(" Capital financeiro "+capitalFinanceiro);		
		
		System.out.println(" Esse heroi tem a identidade revelada ? "+IPR);
		
		System.out.println(" -> ATRIBUTOS <-");		
		
     	System.out.println(" Força        -> "+forca);
		
		System.out.println(" Fôlego       -> "+folego);
		
		System.out.println(" Resistência  ->"+resistencia);
		
		System.out.println(" Inteligência -> "+inteligencia);
		
		System.out.println(" Pontos na escala de poder "+edpH);
	
	}
	

	public void voar() {
		
	}
	
	public void nadar() {
		
	}
	
	public void agredirPessoas() {
		
	}

}
