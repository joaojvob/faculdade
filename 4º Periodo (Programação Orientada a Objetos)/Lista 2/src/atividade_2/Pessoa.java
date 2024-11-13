package atividade_2;

public class Pessoa {
	
	private String nome;
	private int idade;
	private boolean cadastraPessoa;
	
	public Pessoa(String nome, int idade, boolean cadastraPessoa) {
		this.nome = nome;
		this.idade = idade;
		this.cadastraPessoa = cadastraPessoa;
	}
	
	public Pessoa() {
		nome ="";
		idade = 0;
		cadastraPessoa = false;
	}
	
	
	public void exibirPessoa() {
		
		System.out.println(" Nome : "+nome);
		System.out.println(" Idade: "+idade);
		
		if(cadastraPessoa) {
			System.out.println(" Pessoa cadastrada !! ");
		}
		else {
			System.out.println(" Pessoa ñ cadastradad ");
		}
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setIdade(int idade) {
		this.idade = idade;
	}
	
	public int getIdade() {
		return idade;
	}
	
	public void serCadastra(boolean cadastraPessoa) {
		this.cadastraPessoa= cadastraPessoa;
	}
	
	public boolean isCadastra() {
		return cadastraPessoa;
	}
	
}
