package Atividade_2;

import java.util.Scanner;

public class Principal {


	public static void main(String[] args) {

		int opcao = 0;
		
	    Ingresso ingresso = new Ingresso();
	    Normal normal = new Normal();
	    CamaroteInferior cI = new CamaroteInferior();
	    CamaroteSuperior cS = new CamaroteSuperior();
	    VIP vip = new VIP();

		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);
		
	   
	  
		do {
			
			System.out.println("");
			System.out.println("");
			System.out.println(" 0 - Sair ");
			System.out.println(" 1 - Imprime Ingresso Normal ");
			System.out.println(" 2 - Imprime Ingresso VIP ");
			opcao = entrada.nextInt();
			
			switch(opcao)
			{
			case 0:
				System.out.println("adios....");
				System.exit(0);
				break;
				
			case 1:
				
				ingresso.setValorIngresso(50);
			    cI.setLocal("Caratinga");
			    cS.setTaxaAdicional(2.5f);
			    normal.setValorIngresso(50);
			    normal.imprimeIngressoNormal(normal.getValorIngresso());
			    cI.imprimeLocalizacao(cI.getLocal());
							
			break;		
				
			case 2: 
				
				vip.setValorAdicional(1.3);
				System.out.println(" Ingresso Vip: R$ "+vip.valorIngressoVip(ingresso.getValorIngresso()));
			    System.out.println(" Ingresso Vip Camarote Inferior: R$ "+vip.valorIngressoVip(ingresso.getValorIngresso()));
			    cI.imprimeLocalizacao(cI.getLocal());
			    cS.setValorAdicional(65);
			    cS.setValorIngresso(50);
			    System.out.printf(" Ingresso Vip Camarote Superior: R$ %.2f ", cS.valorIngressoAdd(vip.getValorAdicional()));
				
			break;
				
			default:
				System.out.println(" Opção Invalida");
				break;
			}

		}while(opcao != 0);

		
	}
	

}


