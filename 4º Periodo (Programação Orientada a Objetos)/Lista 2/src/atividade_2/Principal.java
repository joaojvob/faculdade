package atividade_2;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {

		int totalDePessoas = 3;
		int i;

		Scanner entrada = new Scanner(System.in);

		Agenda a = new Agenda(totalDePessoas);

		for (i = 0; i < totalDePessoas; i++) {

			Pessoa people = new Pessoa();

			System.out.println(" Informe o nome  : ");
			people.setNome(entrada.next());

			System.out.println(" Informe a idade :");
			people.setIdade(entrada.nextInt());

			people.serCadastra(true);

			a.setPessoa(people, i);
		}

		a.exibeVetor();

	}

}
