package Atividade_1;

public abstract class Pessoa {

	protected String nome;
	protected double salarioBase;
	protected Rotina rotina;
	
	public abstract void verInformacoes();
	public abstract double calcularGanhos();
	
	
	public Pessoa() {
		nome = "";
	}
	
	public Pessoa(String nome) {
		this.nome = nome;
	}
	
	public void mudarRotina(Rotina nova){
		rotina = nova;
	}
	
	public void iniciar() {
		
		rotina.iniciar();
	}
	
	public void pausar() {
		
		rotina.pausar();
	}
	
	public void parar() {
		
		rotina.parar();
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public double getSalarioBase() {
		return salarioBase;
	}
	
	public void setSalarioBase(double salarioBase) {
		this.salarioBase = salarioBase;
	}
	
}