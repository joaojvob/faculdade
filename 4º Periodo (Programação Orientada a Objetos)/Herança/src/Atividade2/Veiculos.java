package Atividade2;


public class Veiculos {
 
	protected String modelo;
	protected double preco;
	
	
	
	public Veiculos(String m, String c, double p) {
		this.modelo = m;
		this.preco = p;
	}

	public Veiculos() {
		modelo = "";
		preco = 0;
	}
	
	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public String getModelo() {
		return modelo;
	}
	
	
	public void setPreco(double preco) {
		this.preco = preco;
	}

	public double getPreco() {
		return preco;
	}
	
	public void movendo() throws InterruptedException  {
		int i = 0;
		System.out.printf(" andando \n");
		for(i=0; i<4;i++) {
			
			System.out.printf(" . ");
			Thread.currentThread();
			Thread.sleep(1000);
		}
		
	
	}
	
}
