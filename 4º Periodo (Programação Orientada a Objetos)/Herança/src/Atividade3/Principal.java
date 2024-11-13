package Atividade3;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;



public class Principal {

	public static void main(String[] args) {
		
		int opcao = 0;

		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);
		
		ArrayList<Herois> lista = new ArrayList<Herois>();
		ArrayList<Humanos> l = new ArrayList<Humanos>();
		ArrayList<NHumanos> lt = new ArrayList<NHumanos>();
		
		int i;
		///////
		
		String nome;
		String localDeOrigem;
		int forca;
		int folego;
		int resistencia ;
		int inteligencia;
		int edpH = 0;
		int edpNH = 0;
		int pontosDeGuerraH = 0;
		int pontosDeGuerraNH = 0;
		
		/////H
		String  nomeHumano ;
		String identidadeRevelada;
		double capitalFinanceiro;
	
		
		//////NH
		String poderes ;
		String especie ;
		
		
		
		
		do {
			
			System.out.println("");
			System.out.println("");
			System.out.println(" 0 - Sair ");
			System.out.println(" 1 - Criar heroi  ");
			System.out.println(" 2 - Exibir super-herois humanos ");
			System.out.println(" 3 - Exibir super-herois ñ humanos ");
			System.out.println(" 4 - Guerra? ");
			
			
			
			opcao = entrada.nextInt();
			
			switch(opcao)
			{
			case 0:
				System.out.println("adios....");
				System.exit(0);
				break;
				
			case 1:
				
				System.out.println(" Deseja criar um super-heroi humano ou ñ humano ? \n | humano = 1 | ñ humano = 2 |");
				opcao = entrada.nextInt();
				
				switch(opcao) {
				
				case 1:
				
					System.out.println(" Nome verdadeiro  ");
					nomeHumano = entrada.next();
							
					System.out.println(" Nome de heroi   ");
					nome = entrada.next();
					
					System.out.println(" Local de origem ");
					localDeOrigem = entrada.next();
					
					System.out.println(" Capital financeiro ");
					capitalFinanceiro = entrada.nextDouble();
					
					System.out.println(" Esse heroi tem a identidade revelada ? ");
					identidadeRevelada = entrada.next();
					
					
					System.out.println(" -> AGORA PREENCHA OS ATRIBUTOS <-");
					
					
					System.out.println(" Força (valor numérico de 0 a 9) ");
					forca = entrada.nextInt();
					
					System.out.println(" Fôlego (valor numérico de 0 a 9) ");
					folego = entrada.nextInt();
					
					System.out.println(" Resistência (valor numérico de 0 a 9) ");
					resistencia = entrada.nextInt();
					
					System.out.println(" Inteligência (valor numérico de 0 a 9) ");
					inteligencia = entrada.nextInt();
					
					edpH = forca + folego + resistencia + inteligencia ;
				
					
					pontosDeGuerraH = pontosDeGuerraH +edpH;
					
					Humanos H = new Humanos(nomeHumano, identidadeRevelada,capitalFinanceiro, nome, localDeOrigem,  forca,  folego,  resistencia,  inteligencia,edpH,edpNH,pontosDeGuerraH,pontosDeGuerraNH);
					lista.add(H);
					
					break;
					
				case 2: 
					
					System.out.println(" Nome de heroi   ");
					nome = entrada.next();
					
					System.out.println(" Local de origem ");
					localDeOrigem = entrada.next();
					
					System.out.println(" Espécie   ");
					especie = entrada.next();
					
					System.out.println(" Poderes ");
					poderes = entrada.next();
					
					
					System.out.println(" -> AGORA PREENCHA OS ATRIBUTOS <-");
					
					
					System.out.println(" Força (valor numérico de 0 a 9) ");
					forca = entrada.nextInt();
					
					System.out.println(" Fôlego (valor numérico de 0 a 9) ");
					folego = entrada.nextInt();
					
					System.out.println(" Resistência (valor numérico de 0 a 9) ");
					resistencia = entrada.nextInt();
					
					System.out.println(" Inteligência (valor numérico de 0 a 9) ");
					inteligencia = entrada.nextInt();
					
					edpNH = forca + folego + resistencia + inteligencia ;
					
					
					pontosDeGuerraNH = pontosDeGuerraNH +edpNH;
					
					NHumanos NH = new NHumanos(poderes, especie, nome, localDeOrigem,  forca,  folego,  resistencia,  inteligencia,edpH,edpNH,pontosDeGuerraH,pontosDeGuerraNH);
					lista.add(NH);
					
					break;
					
				default:
					System.out.println(" Opção Invalida");
					break;
			}
				

				
							
			break;		
				
			case 2: 
				
				for (i = 0; i < lista.size(); i++) {
					
					System.out.println("--------------------------------------------------------------");
					
					System.out.println(" Nome verdadeiro                        : " +lista.get(i).);
					
					System.out.println(" Nome de heroi                          : " +lista.get(i).getNome());
						
					System.out.println(" Local de origem                        : " +lista.get(i).getLocalDeOrigem());	
					
					System.out.println(" Capital financeiro                     : " +lista.get(i));		
					
					System.out.println(" Esse heroi tem a identidade revelada ? : " +lista.get(i));
					
					System.out.println(" -> ATRIBUTOS <-");		
					
			     	System.out.println(" Força                                  -> " +lista.get(i).getForca());
					
					System.out.println(" Fôlego                                 -> " +lista.get(i).getFolego());
					 
					System.out.println(" Resistência                            -> " +lista.get(i).getResistencia());
					
					System.out.println(" Inteligência                           -> " +lista.get(i).getInteligencia());
					
					System.out.println(" Pontos na escala de poder              -> " +lista.get(i).getEPDH());
					
					
				}
				
				
			break;
			
			case 3: 
				
				for (i = 0; i < lista.size(); i++) {
					
					System.out.println("--------------------------------------------------------------");
						
					System.out.println(" Nome de heroi                          : " +lista.get(i).getNome());
						
					System.out.println(" Especie                                : " +lista.get(i).getLocalDeOrigem());	
					
					System.out.println(" Poderes                                : " +lista.get(i));		
					
					
					System.out.println(" -> ATRIBUTOS <-");		
					
			     	System.out.println(" Força                                  -> " +lista.get(i).getForca());
					
					System.out.println(" Fôlego                                 -> " +lista.get(i).getFolego());
					 
					System.out.println(" Resistência                            -> " +lista.get(i).getResistencia());
					
					System.out.println(" Inteligência                           -> " +lista.get(i).getInteligencia());
					
					System.out.println(" Pontos na escala de poder              -> " +lista.get(i).getEPDNH());
				}
				
				
			break;
			
			
			
			
			case 4:
						
				System.out.println(" Pontos na escala de poder na guerra (HUMANOS)               -> " +pontosDeGuerraH);
				System.out.println(" Pontos na escala de poder na guerra (Ñ HUMANOS)             -> " +pontosDeGuerraNH);
				break;
			
				
			default:
				System.out.println(" Opção Invalida");
				break;
			}

		}while(opcao != 0);
	}

}
