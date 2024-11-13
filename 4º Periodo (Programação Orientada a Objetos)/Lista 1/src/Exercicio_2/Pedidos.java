package Exercicio_2;

public class Pedidos {

	String codigo;
	String nomeDoCliente;
	String nomeDoLanche;

	public Pedidos(String codigo, String nCliente, String nLanche) {
		this.codigo = codigo;
		this.nomeDoCliente = nCliente;
		this.nomeDoLanche = nLanche;
	}
	
	public Pedidos() {
		codigo = "";
		nomeDoCliente = "";
		nomeDoLanche = "";
	}

	void exibePedido() {
		System.out.println("");
		System.out.println(" Partido : " + codigo);
		System.out.println(" Número  : " + nomeDoCliente);
		System.out.println(" Nome    : " + nomeDoLanche);
		System.out.println("");
	}

	public void setNomeDoCliente(String nome) {
		this.nomeDoCliente = nome;
	}

	public String getNomeDoCliente() {
		return nomeDoCliente;
	}

	public void setNomeDoLancheo(String lanche) {
		this.nomeDoLanche = lanche;
	}

	public String getNomeDoLanche() {
		return nomeDoLanche;
	}

	public void setCodigo(String codigo) {
		this.codigo = codigo;
	}

	public String getCodigo() {
		return codigo;
	}

}
