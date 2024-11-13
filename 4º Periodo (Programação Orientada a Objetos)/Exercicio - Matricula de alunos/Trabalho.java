package Atividade_1;

public class Trabalho implements Rotina {
	
	private int jornadaMes;
	
	public Trabalho(int jornadaMes) {
		this.jornadaMes = jornadaMes;
	}
	
	public int getJornadaMes() {
		return jornadaMes;
	}

	public void iniciar() {
		System.out.println(" Iniciando o dia com " + jornadaMes*4 + "h/m�s");
	}

	public void pausar() {
		System.out.println(" Hora do almo�o ");
	}

	public void parar() {
		System.out.println(" Finalizando o dia ");
	}

}