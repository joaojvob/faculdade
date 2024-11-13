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
		System.out.println(" Iniciando o dia com " + jornadaMes*4 + "h/mês");
	}

	public void pausar() {
		System.out.println(" Hora do almoço ");
	}

	public void parar() {
		System.out.println(" Finalizando o dia ");
	}

}