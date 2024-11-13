package Atividade_2;

public class Ingresso {
	
	public double  ValorIngresso = 0;

	public Ingresso(double  valor) {
		this.ValorIngresso = valor;
	}
	
	public Ingresso() {
		ValorIngresso = 0 ;
	}
	
	public void setValorIngresso(double  valorIngresso){
		 this.ValorIngresso = valorIngresso;
	}
	
	public double  getValorIngresso(){
		  return this.ValorIngresso;
	}
	
	
	void imprimeValor(double  valor) {
		
		valor = this.ValorIngresso;
		
		System.out.println(" Valor do ingresso : R$ "+valor);
		System.out.println("");
	}

}
