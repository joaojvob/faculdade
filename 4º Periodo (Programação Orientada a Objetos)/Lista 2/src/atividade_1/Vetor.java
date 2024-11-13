package atividade_1;

import java.util.Scanner;

public class Vetor {
	
	
	private int vetor[] = {0};
	
	@SuppressWarnings("unused")
	private Scanner entrada;

	
	public Vetor (int tamanho) {
		vetor = new int[tamanho];
		entrada = new Scanner(System.in);
	}
		
	public int [] getVetor() {
		return vetor;
	}
	
	public void exibirVetor() {
		for(int i: vetor) {
			System.out.print(" "+i);
		}	
	}
		
	public void preencheVet(){
		
		System.out.println(" Preencha  o vetor "+vetor.length);
		
		for (int i = 0; i<vetor.length;i++) {
		vetor[i] = entrada.nextInt();
		}
		
	}
	
	
	
}

