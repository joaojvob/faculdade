package Atividade_2;

public class CamaroteSuperior extends VIP{
	
	float TaxaAdicional;
	   
	public void setTaxaAdicional(float valor){
		this.TaxaAdicional = valor;
	}
	
	public float getTaxaAdicional(){
	    return this.TaxaAdicional;
	}  
	
	public double  valorIngressoAdd(double  valor){
	    valor= this.ValorAdicional;
	    
	    double  valorAdd =(this.TaxaAdicional*this.ValorIngresso)*2+this.ValorIngresso;
	    
	    return valorAdd;
	}
}
