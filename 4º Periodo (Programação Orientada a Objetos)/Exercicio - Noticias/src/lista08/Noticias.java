package lista08;
@SuppressWarnings("unused")
public class Noticias {

	
	private String nomeDoReporter;
	private String nomeDoEntrevistado;
	private String data;
	private String titulo;
	private String noticia;
	private String imagem;
	
	
	public Noticias(String NDR,String NDE,String DT,String TT,String NT,String IMG) {
		this.nomeDoReporter = NDR;
		this.nomeDoEntrevistado = NDE;
		this.data = DT;
		this.titulo = TT;
		this.noticia = NT;
		this.imagem = IMG;
	}
	public Noticias() {
		nomeDoReporter = "";
		nomeDoEntrevistado = "";
		data = "";
		titulo = "";
		noticia = "";
		imagem = "";
	}
	
	/*----------------------------------------*/
	
	public void setReporter(String NR) {
		this.nomeDoReporter = NR;
	}
	public String getReporter(){
		return nomeDoReporter;
	}
	
	/*----------------------------------------*/
	public void setEntrevistado(String NE) {
		this.nomeDoEntrevistado = NE;
	}
	public String getEntrevistado(){
		return nomeDoEntrevistado;
	}
	
	/*----------------------------------------*/
	public void setData(String data) {
		this.data = data;
	}
	public String getData(){
		return data;
	}
	/*--------------------------------------*/
	public void setTitulo(String ttl) {
		this.titulo = ttl;
	}
	public String getTitulo(){
		return titulo;
	}
	
	
	/*----------------------------------------*/
	public void setNoticia(String NT) {
		this.noticia = NT;
	}	
	public String getNoticia(){
		return noticia;
	}
	
	/*----------------------------------------*/
	public void setImagens(String IMG) {
		this.noticia = IMG;
	}	
	public String getImagens(){
		return noticia;
	}
	
}
