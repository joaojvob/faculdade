package lista08;

import java.util.ArrayList;
import java.util.Scanner;


public class Principal {

		//@SuppressWarnings("unused")
		@SuppressWarnings("unused")
		public static void main(String[] args) {
			
			int opcao = 0;

			@SuppressWarnings("resource")
			Scanner entrada = new Scanner(System.in);
			
			ArrayList<Integer> lista1 = new ArrayList<>();
			ArrayList<Integer> lista2 = new ArrayList<>();
			ArrayList<Integer> lista3 = new ArrayList<>();
			
			ArrayList<NoticiasEsportivas> listaEsp = new ArrayList<NoticiasEsportivas>();
			ArrayList<NoticiasEconomicas> listaEco = new ArrayList<NoticiasEconomicas>();
			ArrayList<NoticiasPoliticas> listaPol = new ArrayList<NoticiasPoliticas>();
			
			String nomeDoReporter;
			String nomeDoEntrevistado;
			String data;
			String titulo;
			String noticia1 = null;
			String noticia2 = null;
			String noticia3 = null;
			String imagem;
			/****************/
			String nomeDoEsporte;
			String nomeDoTime;
			/****************/
			String partido;
			/****************/
			float valorDoDolar = 0;
			
			/****************/
			
			int qtdNE = 0;
			int qtdNEC = 0;
			int qtdNP = 0;
			
			int valorTotal = 0;
			int valorObt = 0;
			int p1 = 0;
			int p2 = 0;
			int p3 = 0;
			
			/******************/
			
			int tamanhoMedio1 = 0;
			int tamanhoMedio2 = 0;
			int tamanhoMedio3 = 0;
			
			int tamanho1 = 0;
			int tamanho2 = 0;
			int tamanho3 = 0;
			
			
			int tddp1 = 0;
			int tddp2 = 0;
			int tddp3 = 0;
			
			int media1 = 0;
			int media2 = 0;
			int media3 = 0;
			
			int maior1 = 0, menor1 = 0;	
			int maior2 = 0, menor2 = 0;	
			int maior3 = 0, menor3 = 0;
			
			String pesquisa;
			
			do {
				
				System.out.println("");
				System.out.println("");
				System.out.println(" 0 - Sair ");
				System.out.println(" 1 - Cadastrar Notícias        ");
				System.out.println(" 2 - Ler Notícias              ");
				System.out.println(" 3 - Escolher qual noticia ler ");
				System.out.println(" 4 - Mostrar estatísticas      ");	
				opcao = entrada.nextInt();
				System.out.println("");
				System.out.println("");
				
				switch(opcao)
				{
				case 0:
					System.out.println("adios....");
					System.exit(0);
					break;
					
				case 1:
					System.out.println("");
					System.out.println("");
					System.out.println("|--------------------------------------------|");
					System.out.println("  Qual o tipo de notícia que deseja escrever  ");
					System.out.println("|--------------------------------------------|");
					System.out.println(" > Sair                (0) ");
					System.out.println(" > Notícias Esportivas (1) ");
					System.out.println(" > Notícias Politicas  (2) ");
					System.out.println(" > Notícias Econômicas (3) ");
					opcao = entrada.nextInt();
					System.out.println("");
					System.out.println("");
					
						switch(opcao) {
					
							case 1:
					
								System.out.println(" Titulo da noticia                  \n > ");
								titulo = entrada.next();
										
								System.out.println(" Data da noticia                    \n > ");
								data = entrada.next();
								
								System.out.println(" Noticia                            \n > ");
								noticia1 = entrada.next();
								
								tamanho1 = noticia1.length();
								
								tamanhoMedio1 += noticia1.length();
								tddp1++;
								
								lista1.add(tamanhoMedio1);							
								
								System.out.println(" Informe o nome do reporter         \n > ");
								nomeDoReporter = entrada.next();
								
								System.out.println(" Informe o nome do entrevistado     \n > ");
								nomeDoEntrevistado = entrada.next();							
								
								System.out.println(" Nome do esporte                    \n > ");
								nomeDoEsporte = entrada.next();
								
								System.out.println(" Nome do time                       \n > ");
								nomeDoTime = entrada.next();
								
								System.out.println(" Imagem                             \n > ");
								imagem = entrada.next();
															
								NoticiasEsportivas Nesportvas = new NoticiasEsportivas(nomeDoReporter,nomeDoEntrevistado,data,titulo,noticia1,imagem,nomeDoEsporte,nomeDoTime);
								listaEsp.add(Nesportvas);
								qtdNE++;
							
								break;
						
							case 2: 
						
								
								System.out.println(" Titulo da noticia                  \n > ");
								titulo = entrada.next();
										
								System.out.println(" Data da noticia                    \n > ");
								data = entrada.next();
								
								System.out.println(" Noticia                            \n > ");
								noticia2 = entrada.next();
								
								tamanho2 = noticia2.length();
								
								tamanhoMedio2 += noticia2.length();
								tddp2++;
															
								lista2.add(tamanhoMedio2);
								
								System.out.println(" Informe o nome do reporter         \n > ");
								nomeDoReporter = entrada.next();
								
								System.out.println(" Informe o nome do entrevistado     \n > ");
								nomeDoEntrevistado = entrada.next();							
								
								System.out.println(" Partido Politico                   \n > ");
								partido = entrada.next();
			
								System.out.println(" Imagem                             \n > ");
								imagem = entrada.next();
															
								NoticiasPoliticas Npoliticas = new NoticiasPoliticas(nomeDoReporter,nomeDoEntrevistado,data,titulo,noticia2,imagem,partido);
								listaPol.add(Npoliticas);
								qtdNP++;
								
								break;	
						
							case 3: 
						
								System.out.println(" Titulo da noticia                  \n > ");
								titulo = entrada.next();
										
								System.out.println(" Data da noticia                    \n > ");
								data = entrada.next();
								
								System.out.println(" Noticia                            \n > ");
								noticia3 = entrada.next();
								
								tamanho3 = noticia3.length();
								
								tamanhoMedio3 += noticia3.length();
								tddp3++;
								
								lista3.add(tamanhoMedio3);
															
								System.out.println(" Informe o nome do reporter         \n > ");
								nomeDoReporter = entrada.next();
								
								System.out.println(" Informe o nome do entrevistado     \n > ");
								nomeDoEntrevistado = entrada.next();							
								
								System.out.println(" Partido Politico                   \n > ");
								partido = entrada.next();
			
								System.out.println(" Imagem                             \n > ");
								imagem = entrada.next();
															
								NoticiasEconomicas Neconomicas = new NoticiasEconomicas(nomeDoReporter,nomeDoEntrevistado,data,titulo,noticia3,imagem,valorDoDolar);
								listaEco.add(Neconomicas);
								qtdNEC++;
								break;
								
							default:
									System.out.println(" Opção Invalida ");
								break;
						}
						break;
					
				case 2: 
					
					int i;
					
					for (i = 0; i < listaEsp.size(); i++) {
						
						System.out.println("--------------------------------------------------------------");
						System.out.println("                  Notícias Esportivas " );
						
						System.out.println(" Titulo            : " +listaEsp.get(i).getTitulo());
						
						System.out.println(" Data              : " +listaEsp.get(i).getData());
							
						System.out.println(" Notícia           : " +listaEsp.get(i).getNoticia());	
						
						System.out.println(" Reporter          : " +listaEsp.get(i).getReporter());		
						
				     	System.out.println(" Entrevistado      : " +listaEsp.get(i).getEntrevistado());
				     	
				     	System.out.println(" Esporte           : " +listaEsp.get(i).getEsporte());
				     	
				     	System.out.println(" Time              : " +listaEsp.get(i).getTime());
						
						System.out.println(" Imagem            : " +listaEsp.get(i).getImagens());
						 

					}
					
					for (i = 0; i < listaPol.size(); i++) {
						
						System.out.println("--------------------------------------------------------------");
						System.out.println("                  Notícias Políticas " );
						
						System.out.println(" Titulo            : " +listaPol.get(i).getTitulo());
						
						System.out.println(" Data              : " +listaPol.get(i).getData());
							
						System.out.println(" Notícia           : " +listaPol.get(i).getNoticia());	
						
						System.out.println(" Reporter          : " +listaPol.get(i).getReporter());		
						
				     	System.out.println(" Entrevistado      : " +listaPol.get(i).getEntrevistado());
				     	
				     	System.out.println(" Partido           : " +listaPol.get(i).getPartido());
				     						
						System.out.println(" Imagem            : " +listaPol.get(i).getImagens());
						 

					}
					
					for (i = 0; i < listaEco.size(); i++) {
						
						System.out.println("--------------------------------------------------------------");
						System.out.println("                  Notícias Econômicas " );
						
						System.out.println(" Titulo            : " +listaEco.get(i).getTitulo());
						
						System.out.println(" Data              : " +listaEco.get(i).getData());
							
						System.out.println(" Notícia           : " +listaEco.get(i).getNoticia());	
						
						System.out.println(" Reporter          : " +listaEco.get(i).getReporter());		
						
				     	System.out.println(" Entrevistado      : " +listaEco.get(i).getEntrevistado());
				     	
				     	System.out.println(" Valor do dolar    : " +listaEco.get(i).getDolar());
				     					
						System.out.println(" Imagem            : " +listaEco.get(i).getImagens());
						 

					}
					break;
					
					
					
				case 3:
					
					
					System.out.println("");
					System.out.println("");
					System.out.println("|--------------------------------------------|");
					System.out.println("  Informe qual noticia deseja buscar  ");
					System.out.println("|--------------------------------------------|");
					System.out.println(" > Sair                (0) ");
					System.out.println(" > Notícias Esportivas (1) ");
					System.out.println(" > Notícias Politicas  (2) ");
					System.out.println(" > Notícias Econômicas (3) ");
					opcao = entrada.nextInt();
					System.out.println("");
					System.out.println("");
					
					
					switch(opcao) {
					
					case 1:
						
						int i1 = 0;
						System.out.println(" Informe o titulo da noticia");
						pesquisa = entrada.next();
						for(i1 = 0; i1 < listaEsp.size(); i1++) {
						
							if(listaEsp.get(i1).getTitulo().contains(pesquisa)) {
								System.out.println(" Contém na lista: "+pesquisa);
						
								System.out.println(" Titulo            : " +listaEsp.get(i1).getTitulo());
						
								System.out.println(" Data              : " +listaEsp.get(i1).getData());
							
								System.out.println(" Notícia           : " +listaEsp.get(i1).getNoticia());	
						
								System.out.println(" Reporter          : " +listaEsp.get(i1).getReporter());		
						
								System.out.println(" Entrevistado      : " +listaEsp.get(i1).getEntrevistado());
				     	
								System.out.println(" Esporte           : " +listaEsp.get(i1).getEsporte());
				     	
								System.out.println(" Time              : " +listaEsp.get(i1).getTime());
						
								System.out.println(" Imagem            : " +listaEsp.get(i1).getImagens());
						
							}
							else {
						    System.out.println(pesquisa + "não contém na lista: ");
							}
						}
						
						break;
						
					case 2:
						
						int i2 = 0;
						System.out.println(" Informe o titulo da noticia");
						pesquisa = entrada.next();
						for(i2 = 0; i2 < listaPol.size(); i2++) {
						
							if(listaPol.get(i2).getTitulo().contains(pesquisa)) {
								System.out.println(" Contém na lista: "+pesquisa);
						
								System.out.println(" Titulo            : " +listaPol.get(i2).getTitulo());
						
								System.out.println(" Data              : " +listaPol.get(i2).getData());
							
								System.out.println(" Notícia           : " +listaPol.get(i2).getNoticia());	
						
								System.out.println(" Reporter          : " +listaPol.get(i2).getReporter());		
						
								System.out.println(" Entrevistado      : " +listaPol.get(i2).getEntrevistado());
				     	
								System.out.println(" Partido           : " +listaPol.get(i2).getPartido());
						
								System.out.println(" Imagem            : " +listaPol.get(i2).getImagens());
						
							}
							else {
						    System.out.println(pesquisa + "não contém na lista: ");
							}
						}
						
						break;
						
					case 3:
						
						int i3 = 0;
						System.out.println(" Informe o titulo da noticia");
						pesquisa = entrada.next();
						for(i3 = 0; i3 < listaEco.size(); i3++) {
						
							if(listaEco.get(i3).getTitulo().contains(pesquisa)) {
								System.out.println(" Contém na lista: "+pesquisa);
						
								System.out.println(" Titulo            : " +listaEco.get(i3).getTitulo());
						
								System.out.println(" Data              : " +listaEco.get(i3).getData());
							
								System.out.println(" Notícia           : " +listaEco.get(i3).getNoticia());	
						
								System.out.println(" Reporter          : " +listaEco.get(i3).getReporter());		
						
								System.out.println(" Entrevistado      : " +listaEco.get(i3).getEntrevistado());
				     	
								System.out.println(" Valor do dolar    : " +listaEco.get(i3).getDolar());
						
								System.out.println(" Imagem            : " +listaEco.get(i3).getImagens());
						
							}
							else {
						    System.out.println(pesquisa + "não contém na lista: ");
							}
						}
						
						break;
					}
					

					break;
					

				case 4:
					
					valorTotal = qtdNE + qtdNP + qtdNEC;
					
					p1 = (int) ((qtdNE*100)/valorTotal);
					
					p2 = (int) ((qtdNP*100)/valorTotal);
					
					p3 = (int) ((qtdNEC*100)/valorTotal);
					
					media1 = tamanhoMedio1/tddp1;
					media2 = tamanhoMedio2/tddp2;
					media3 = tamanhoMedio3/tddp3;
					
					
				
					
					
					
					System.out.println("-------------------------------- \n ");
					
			     	System.out.printf(" Total de Noticias \n Esportivas : %d \n Politicas  : %d \n Economicas : %d \n ",qtdNE,qtdNP,qtdNEC );
			     	
			     	System.out.println("-------------------------------- \n ");
			     	
			     	System.out.printf(" Porcentual de Noticias \n Esportivas : %d \n Politicas  : %d \n Economicas : %d \n ",p1,p2,p3 );
			     	
			     	System.out.println("-------------------------------- \n ");
			     	
			     	System.out.println(" Tamanho médio dos textos de noticias esportivas : "+media1);
			     	System.out.println(" Tamanho médio dos textos de noticias politicas  : "+media2);
			     	System.out.println(" Tamanho médio dos textos de noticias economicas : "+media3);
			     	
			     	System.out.println("\n ");
			     	System.out.println("-------- noticias esportivas -------- \n ");
			     	
			     	maior1 = menor1 = lista1.get(0);
			     	
			     	for (int valor1: lista1) {
			     	  if (valor1 > maior1) {
			     	    maior1 = valor1;
			     	  } else if (valor1 < menor1) {
			     	    menor1 = valor1;
			     	  }
			     	}		     	
			     	
			     	System.out.println(" Maior notícia cadastrada : "+maior1);
			     	System.out.println(" Menor notícia cadastrada : "+menor1);
			     	System.out.println("\n ");   	
			     	System.out.println("-------- noticias politicas -------- \n ");	
			     	
			     	maior2 = menor2 = lista2.get(0);
			     	
			     	for (int valor2: lista2) {
			     	  if (valor2 > maior2) {
			     	    maior2 = valor2;
			     	  } else if (valor2 < menor2) {
			     	    menor2 = valor2;
			     	  }
			     	}	
			     	
			     	System.out.println(" Maior notícia cadastrada : "+maior2);
			     	System.out.println(" Menor notícia cadastrada : "+menor2);
			     	
			     	System.out.println("-------- noticias economicas -------- \n ");
			     	
			     	maior3 = menor3 = lista3.get(0);
			     	
			     	for (int valor3: lista3) {
			     	  if (valor3 > maior3) {
			     	    maior3 = valor3;
			     	  } else if (valor3 < menor3) {
			     	    menor3 = valor3;
			     	  }
			     	}
			     	System.out.println("\n ");
			     	System.out.println(" Maior notícia cadastrada : "+maior3);
			     	System.out.println(" Menor notícia cadastrada : "+menor3);
			     	
			     	
			   


					break;
					
				default:
					System.out.println(" Opção Invalida");
					break;
				}

			}while(opcao != 0);
		}

}
