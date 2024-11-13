package Exercicio_3;

public class Cidadao implements Comparable<Cidadao>{

	String nome;
	String cpf;
	int idade;

	public Cidadao(String nome, String cpf, int idade) {
		this.nome = nome;
		this.cpf = cpf;
		this.idade = idade;
	}
	
	public Cidadao() {
		nome = "";
		cpf = "";
		idade = 0;
	}

	public void setNomeDoCidadao(String nome) {
		this.nome = nome;
	}

	public String getNomeDoCidadao() {
		return nome;
	}

	public void setIdadeDoCidadao(int idade) {
		this.idade = idade;
	}

	public int getIdadeDoCidadao() {
		return idade;
	}

	public void setCPF(String cpf) {
		this.cpf = cpf;
	}

	public String getCPF() {
		return cpf;
	}

	@Override
	public int compareTo(Cidadao pCidadao) {
		return (pCidadao.getIdadeDoCidadao()-this.idade);
	}

}
