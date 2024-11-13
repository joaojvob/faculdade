package Model;

import java.util.ArrayList;



public class Categoria {
	
	String id;
	String nome;
	String descricao;
	
	public Categoria(String id,String nome, String descricao) {
		this.id = id;
		this.descricao = descricao;
		this.nome = nome;
	}

	public Categoria() {
		
	}
	
	public String getID_Cat() {
	    return id;
	}

	public void setID_Cat(String id) {
	    this.id = id;
	}

	public String getNome_Cat() {
	    return nome;
	}
	
	public void setNome_Cat(String Nome) {
	     this.nome = Nome;
	}
	

	public void setDescricao_Cat(String descricao) {
	     this.descricao = descricao;
	}
	
	public String getDescricao_Cat() {
	    return descricao;
	}
	    	    
	public static ArrayList<Categoria> getProdutos(){
	        ArrayList<Categoria> categoria = new ArrayList<Categoria>();
	        return categoria;
	 }
    public boolean Persistir(){
        return true;
    }

}
