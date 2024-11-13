package lista08;

import java.util.ArrayList;

public class NoticiasEconomicas extends Noticias{
	
	@SuppressWarnings({ "unchecked", "rawtypes" })
	ArrayList<Noticias> noticia = new ArrayList();

	private float valorDoDolar;
	
	public NoticiasEconomicas(String NDR,String NDE,String DT,String TT,String NT,String IMG, Float dolar) {
		super(NDR,NDE,DT,TT,NT,IMG);
		this.valorDoDolar = dolar;
	}

	public NoticiasEconomicas() {
		valorDoDolar = 0;
	}
	
	
	/*----------------------------------------*/
	
	public void setDolar(float partido) {
		this.valorDoDolar = partido;
	}
	public float getDolar(){
		return valorDoDolar;
	}

}
