package Exercicio_3;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

import Exercicio_2.Pedidos;

@SuppressWarnings("unused")
public class Principal {

	@SuppressWarnings("unlikely-arg-type")
	public static void main(String[] args) {
		
		int opcao = 0;
		int i = 0;

		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);
		    
        String NOME; 
        String CPF;
        int IDADE;
        String pd;

		ArrayList<Cidadao> lista = new ArrayList<Cidadao>();
		
		do {
			System.out.println("");
			System.out.println(" 0 - Sair ");
			System.out.println(" 1 - Cadastrar Cidadão ");
			System.out.println(" 2 - Exibir Todos os Cidadão Cadastrados ");
			System.out.println(" 3 - Atender Cidadão ");
			opcao = entrada.nextInt();
			
			switch(opcao)
			{
			case 0:
				System.out.println("adios....");
				System.exit(0);
				break;
				
			case 1:
				
				Cidadao pessoa = new Cidadao();
				
				System.out.printf("\n Informe o nome do cidadão  \n ",i+1);
				NOME = entrada.next();

				System.out.printf("\n Informe o CPF do cidadão   \n ",i+1);
				CPF = entrada.next();
					
				System.out.printf("\n Informe a idade do cidadão \n ",i+1);
				IDADE = entrada.nextInt();
					
				lista.add(new Cidadao(NOME, CPF, IDADE));
				

				
				break;		
				
			case 2:
				
			     for (i = 0; i < lista.size(); i++) {
			    	 System.out.println("\n 	 Pessoa n "+i);
			    	 System.out.println("");
			    	 System.out.println(" NOME    : " + lista.get(i).getNomeDoCidadao());
			    	 System.out.println(" CPF     : " + lista.get(i).getCPF());
			    	 System.out.println(" IDADE   : " + lista.get(i).getIdadeDoCidadao());
			     }
				
				break;	
				
			case 3:
			
				Collections.sort(lista);
			     for (i = 0; i < lista.size(); i++) {
			    	 System.out.println("\n 	 Pessoa n "+i);
			    	 System.out.println("");
			    	 System.out.println(" NOME    : " + lista.get(i).getNomeDoCidadao());
			    	 System.out.println(" CPF     : " + lista.get(i).getCPF());
			    	 System.out.println(" IDADE   : " + lista.get(i).getIdadeDoCidadao());
			     }
			     
			     for(i = 0; i < lista.size(); i++)
				    {
			    	 Cidadao p = lista.get(i);
						System.out.println(" Informe o nome da pessoa que deseja remover ");
						pd = entrada.next();
				        if(p.getNomeDoCidadao().equals(pd))
				        {
				        	lista.remove(p);
				        	System.out.println(" Cidadão atendido ");
				            break;
				        }
				        else {
				        	System.out.println(" nome invalido ");
				        }
				    }
			
				break;
			
				
			default:
				System.out.println(" Opção Invalida");
				break;
			}
	
		}while(opcao != 0);

	}


}
