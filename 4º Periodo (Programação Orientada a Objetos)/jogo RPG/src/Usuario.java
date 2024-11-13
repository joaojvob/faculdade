import java.util.Scanner;

public class Usuario extends Personagem{

	public Usuario() {
					
		
	}
	
	@SuppressWarnings("resource")
	static int ataqueUsuario() {
		 Scanner leitor = new Scanner(System.in);
		 System.out.println("Escolha seu ataque");
	     System.out.println("(1) - Soco");
	     System.out.println("(2) - Especial");
	     return leitor.nextInt();
		 }

}
