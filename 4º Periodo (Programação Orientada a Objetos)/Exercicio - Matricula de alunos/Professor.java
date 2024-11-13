package Atividade_1;

public class Professor extends Pessoa{

	private int adicionalNoturno;
	private String formacao;
	
	public Professor() {
		
	}
	
	public Professor(int ad, String form, String nome) {
		super(nome);
		adicionalNoturno = ad;
		formacao = form;
	}
	
	
	
	public void verInformacoes() {
		System.out.println("--------- Professor ---------");
		System.out.println(" Nome        : " + nome);
		System.out.println(" Salário     : " + salarioBase);
		System.out.println(" Formação    : " + formacao);
		System.out.println(" Ad. Noturno : " + adicionalNoturno);
		System.out.println("------------------------------");
	}
	
	public String getFORM() {
		return formacao;
	}
	
	public void setFORM(String FORM) {
		this.formacao = FORM;
	}
	
	public int getAD() {
		return adicionalNoturno;
	}
	
	public void setAD(int ad) {
		this.adicionalNoturno = ad;
	}
	
	
	public double calcularGanhos() {
		return salarioBase + (adicionalNoturno * salarioBase)/100;
	}
	
}
