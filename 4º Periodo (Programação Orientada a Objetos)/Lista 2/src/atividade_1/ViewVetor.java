package atividade_1;

import java.util.Scanner;

public class ViewVetor {

	public static void main(String[] args) {

		Vetor vet = new Vetor(10);

		vet.preencheVet();
		System.out.println(" Exibindo o vetor ");
		vet.exibirVetor();
		System.out.println("\n Buscando e exibindo o vetor ");
		for (int i : vet.getVetor()) {
			System.out.print(i);
		}
	}

}
