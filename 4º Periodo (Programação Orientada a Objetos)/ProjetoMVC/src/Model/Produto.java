package Model;

import java.util.ArrayList;

public class Produto {
	
	String id;
	String nome;
	String preco;
	
	public Produto(String id,String nome, String preco) {
		this.id = id;
		this.preco = preco;
		this.nome = nome;
	}

	public Produto() {
		
	}
	
	public String getID() {
	    return id;
	}

	public void setID(String id) {
	    this.id = id;
	}

	public String getNome() {
	    return nome;
	}

	public void setNome(String Nome) {
	     this.nome = Nome;
	}
	    
	public String getPreco() {
		 return preco;
	}

	public void setPreco(String preco) {
		 this.preco = preco;
	}
	    
	public static ArrayList<Produto> getProdutos(){
	        ArrayList<Produto> produtos = new ArrayList<Produto>();
	        return produtos;
	}
	
    public boolean Persistir(){
        return true;
    }
}
