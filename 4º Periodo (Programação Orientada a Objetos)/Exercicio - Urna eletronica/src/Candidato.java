import java.util.Scanner;

@SuppressWarnings("unused")
public class Candidato {
	
	private String numero;
	private String nome;
	private String partido;
	public int votos = 0;
	
 
	public Candidato(String nome,String numero, String partido) {
		this.nome = nome;
		this.numero = numero;
		this.partido = partido;
	}
	
	public Candidato() {
		nome ="";
		numero = "";
		partido ="";
	}
	
	
	void exibeCandidato() {
		
		System.out.println("");
		System.out.println(" Partido : "+nome);
		System.out.println(" Número  : "+numero);
		System.out.println(" Nome    : "+nome);
		System.out.println("");
	}
    
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getNome() {
		return nome;
	}
	
	
	public void setNumero(String numero) {
		this.numero = numero;
	}
	
	public String getNumero() {
		return numero;
	}
	
	
	public void setPartido(String partido) {
		this.partido = partido;
	}
	
	public String getPartido() {
		return partido;
	}


	public void Votar() { 
		votos++; 
	}
	
    public int getVotos() { 
    	return votos; 
    }
    
    
  
    
}
