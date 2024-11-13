

public class Personagem {

	 private static int hpUsuario = 150;
	 private static int hpComputador = 10;
	 private String nome;

	
	
	public Personagem(int hpU, int hpC, String nome) {
		Personagem.hpUsuario = hpU;
		Personagem.hpComputador = hpC;
		this.nome = nome;
	}
	
	
	public Personagem() {
		hpUsuario = 150;
		hpComputador = 10;
		nome = "";
	}

	/*----------------------------------*/
	public void setHP_usuario(int hpU) {
		Personagem.hpUsuario = hpU;
	}
	public static int getHP_usuario(){
		return hpUsuario;
	}
	
	/*----------------------------------*/
	public void setHP_CPU(int hpC) {
		Personagem.hpComputador = hpC;
	}
	public static int getHP_CPU(){
		return hpComputador;
	}
	
	/*----------------------------------*/
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getNome(){
		return nome;
	}
	
	
	
	
	
}
