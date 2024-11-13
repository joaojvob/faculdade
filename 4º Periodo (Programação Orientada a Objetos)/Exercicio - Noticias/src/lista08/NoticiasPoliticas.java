package lista08;

import java.util.ArrayList;

public class NoticiasPoliticas extends Noticias{

	@SuppressWarnings({ "unchecked", "rawtypes" })
	ArrayList<Noticias> noticia = new ArrayList();;
	
	private String partido;
	
	public NoticiasPoliticas(String NDR,String NDE,String DT,String TT,String NT,String IMG, String partido) {
		super(NDR,NDE,DT,TT,NT,IMG);
		this.partido = partido;
	}

	public NoticiasPoliticas() {
		partido = "";
	}
	
	
	/*----------------------------------------*/
	
	public void setPartido(String partido) {
		this.partido = partido;
	}
	public String getPartido(){
		return partido;
	}

}
