import java.util.Random;

public class CPU extends Personagem{

	public CPU() {
		// TODO Auto-generated constructor stub
	}
	 static int ataqueComputador() {
		  Random gerador = new Random();
		  return gerador.nextInt(3) + 1;
		 }
}
