package Atividade_1;

public class Lazer implements Rotina{

	protected int vezesNoMes;
	protected String tipo;
	
	public Lazer(String T,int V) {
		this.vezesNoMes = V;
		this.tipo = T;
	}
	
	
	public Lazer() {
		vezesNoMes = 0;
		tipo = "";
	}


	@Override
	public void iniciar() {
		System.out.println(" Acordando ");	
	}


	@Override
	public void pausar() {
		System.out.println(" Tirando ferias em : "+tipo);
		System.out.println(" Vezes no mês      : "+vezesNoMes);	
	}


	@Override
	public void parar() {
		System.out.println(" Indo para a casa ");	
	}



	
}
