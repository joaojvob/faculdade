package Exercicio_2;
import java.util.ArrayList;
import java.util.Scanner;

@SuppressWarnings("unused")
public class Principal {

	public static void main(String[] args) {
		
		int opcao = 0;
		int i = 0;

		@SuppressWarnings("resource")
		Scanner entrada = new Scanner(System.in);
		    
        String codigo; 
        String nomeC;
        String nomeL;
        String pd;

		ArrayList<Pedidos> lista = new ArrayList<Pedidos>();
		
		do {
			System.out.println("");
			System.out.println(" 0 - Sair ");
			System.out.println(" 1 - Cadastrar Pedido ");
			System.out.println(" 2 - Exibir Todos os Pedidos ");
			System.out.println(" 3 - Entregar um Pedido ");
			opcao = entrada.nextInt();
			
			switch(opcao)
			{
			case 0:
				System.out.println("adios....");
				System.exit(0);
				break;
				
			case 1:
				
				Pedidos pessoa = new Pedidos();
				
				System.out.printf("\n Informe o codigo do cliente    \n ",i+1);
				codigo = entrada.next();

				System.out.printf("\n Informe o nome do cliente      \n ",i+1);
				nomeC = entrada.next();
					
				System.out.printf("\n Informe o pedido do cliente \n -> %s  \n ",nomeC,i+1);
				nomeL = entrada.next();
					
				lista.add(new Pedidos(codigo, nomeC, nomeL));
				

				
				break;		
				
			case 2:
				
			     for (i = 0; i < lista.size(); i++) {
			    	 System.out.println("\n 	 Pedido n "+i);
			    	 System.out.println("");
			    	 System.out.println(" CODIGO   : " + lista.get(i).getCodigo());
			    	 System.out.println(" NOME     : " + lista.get(i).getNomeDoCliente());
			    	 System.out.println(" PEDIDO   : " + lista.get(i).getNomeDoLanche());
			     }
				
				break;	
				
			case 3:
				
				for(i = 0; i < lista.size(); i++)
			    {
					Pedidos p = lista.get(i);
					System.out.println(" Informe o codigo do cliente para o qual deseja entregar o pedido ");
					pd = entrada.next();
			        if(p.getCodigo().equals(pd))
			        {
			        	lista.remove(p);
			        	System.out.println(" Pedido entregue ");
			            break;
			        }
			        else {
			        	System.out.println(" CODIGO INVALIDO ");
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
