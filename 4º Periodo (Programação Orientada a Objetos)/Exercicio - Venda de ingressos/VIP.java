package Atividade_2;

public class VIP extends Ingresso{

	public double  ValorAdicional;
	
	public VIP(double  valor) {
		this.ValorAdicional = valor;
	}
	
	public VIP() {
		ValorAdicional = 0 ;
	}
	
	public void setValorAdicional(double  valorAdicional){
		 this.ValorAdicional = valorAdicional;
	}
	
	public double  getValorAdicional(){
		  return this.ValorAdicional;
	}
	
	public double  valorIngressoVip(double  valorIng) {
		this.ValorIngresso = valorIng;
		return this.ValorIngresso +(this.ValorAdicional*this.ValorIngresso);
	}

}
