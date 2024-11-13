package atividade_2;

public class Agenda {
	
	private Pessoa vetor[];
	
	public Agenda(int tamanho) {
		vetor = new Pessoa[tamanho];
	}
	
	public void setPessoa(Pessoa people,int posicao) {
		vetor[posicao] = people;
	}
	
	public Pessoa[] getVetor() {
		return vetor;
	}
	
	public void exibeVetor() {
		for(Pessoa people:vetor) {
			people.exibirPessoa();
		}
	}
}
