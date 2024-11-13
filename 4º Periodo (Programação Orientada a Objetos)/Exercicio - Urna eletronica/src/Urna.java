import java.util.Scanner;

@SuppressWarnings("unused")
public class Urna {
	
	private int codigo;
	private Votos[] v_votos;
	private Candidato[] v_pessoa; 
	
	public Urna(int tamanho) {
		v_pessoa = new Candidato[tamanho];
	}
	
	public void setPessoa(Candidato pessoa,int posicao) {
		v_pessoa[posicao] = pessoa;
	}
	
	public Candidato[] getVetor() {
		return v_pessoa;
	}
	
	public void exibeVetor() {
		for(Candidato pessoa:v_pessoa) {
			pessoa.exibeCandidato();
		}
	}
	
  
			
	
}
