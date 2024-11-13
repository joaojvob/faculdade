import java.util.ArrayList;
import java.util.Scanner;
import java.util.*;

@SuppressWarnings("unused")
public class Principal {
	
	
	public static void main(String[] args) {


		int opcao = 0;
		int i = 0;

		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);
		
       
        String numero; 
        String nome;
        String partido;
        String voto;

		ArrayList<Candidato> Candidatos = new ArrayList<Candidato>();
		
		do {
			
			System.out.println("");
			System.out.println(" 0 - Sair ");
			System.out.println(" 1 - Cadastrar candidatos ");
			System.out.println(" 2 - Exibir candadato ");
			System.out.println(" 3 - Votar ");
			System.out.println(" 4 - Rankig ");
			opcao = entrada.nextInt();
			
			switch(opcao)
			{
			case 0:
				System.out.println("adios....");
				System.exit(0);
				break;
				
			case 1:
				
				Candidato pessoa = new Candidato();
				
				System.out.printf("\n Informe o nome do candidato(a)    : \n ",i+1);
				nome = entrada.next();

				System.out.printf("\n Informe o partido do candidato(a) : \n ",i+1);
				partido = entrada.next();
					
				System.out.printf("\n Informe o numero do candidato(a)  : \n ",i+1);
			 	numero = entrada.next();
					
				Candidatos.add(new Candidato(nome, numero, partido));
				

				
				break;		
				
			case 2:
				
				System.out.println(" Digite um numero");
				voto = entrada.next();
                for (i = 0; i < Candidatos.size(); i++) {
                    if (Candidatos.get(i).getNumero().equals(voto)) {
                    	System.out.println(" Informações do candidato \n ");
                        System.out.println(" Nome : "+ Candidatos.get(i).getNome() + "\n Numero : " + Candidatos.get(i).getPartido() + "\n votos : " + Candidatos.get(i).getVotos());
                        System.out.println("");
                    }else {
                    	System.out.println(" NULO ");
                    }
                }
                
				break;	
				
			case 3:
				
				System.out.println(" Digite o número do candidado que deseja votar ");
				voto = entrada.next();
                i=0;
                for (; i < Candidatos.size(); i++) {
                    if (Candidatos.get(i).getNumero().equals(voto)) { 
                        break;
 
                    }
                }
                if (i != Candidatos.size()) Candidatos.get(i).Votar();
               
                
          
				break;
			
			case 4:
				/*
				int j,key;
				
				for (j = 1; j < Candidatos.size(); j++)
			    {
			      key = Candidatos.size();
			      for (i = j - 1; (i >= 0) && (vetor[i] > key); i--)
			      {
			         vetor[i + 1] = vetor[i];
			       }
			        vetor[i + 1] = key;
			    }
			    */
				break;
				
			default:
				System.out.println(" Opção Invalida");
				break;
			}
	
		}while(opcao != 0);

	}



}
