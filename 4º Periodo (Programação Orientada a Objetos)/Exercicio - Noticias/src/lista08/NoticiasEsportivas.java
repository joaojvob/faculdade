package lista08;

import java.util.ArrayList;

public class NoticiasEsportivas extends Noticias{

	@SuppressWarnings("unused")
	private static final String NoticiasEsportivas = null;

	@SuppressWarnings({ "unchecked", "rawtypes" })
	ArrayList<Noticias> noticia = new ArrayList();;
	
	private String nomeDoEsporte;
	private String nomeDoTime;
	
	public NoticiasEsportivas(String NDR,String NDE,String DT,String TT,String NT,String IMG,String esporte,String time) {
		super(NDR,NDE,DT,TT,NT,IMG);
		this.nomeDoEsporte = esporte;
		this.nomeDoTime = time;
	}

	public NoticiasEsportivas() {
		nomeDoEsporte = "";
		nomeDoTime = "";
	}
	
	
	/*----------------------------------------*/
	
	public void setEsporte(String E) {
		this.nomeDoEsporte = E;
	}
	public String getEsporte(){
		return nomeDoEsporte;
	}
	
	/*----------------------------------------*/
	
	public void setTime(String T) {
		this.nomeDoTime = T;
	}
	public String getTime(){
		return nomeDoTime;
	}
	
	void exibirNoticiasEsportivas(String Titulo) {
	
			System.out.println("--------------------------------------------------------------");
			
			System.out.println(" Titulo            : " +getNoticia());
			
			System.out.println(" Data              : " +getData());
				
			System.out.println(" Notícia           : " +getTitulo());	
			
			System.out.println(" Reporter          : " +getReporter());		
			
	     	System.out.println(" Notícia sobre     : " +noticia);
			
	     	System.out.println(" Jogador           : " +noticia);
			
			System.out.println(" Imagem            : " +getImagens());
			 

		
		
	}
	
}
