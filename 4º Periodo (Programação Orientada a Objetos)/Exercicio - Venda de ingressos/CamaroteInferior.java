package Atividade_2;

public class CamaroteInferior extends VIP{

	String LocalDoIngresso;

    public void setLocal(String local){
        this.LocalDoIngresso = local;
    }
	
    public String getLocal(){
        return this.LocalDoIngresso;
      }    
    
    public String acessaLocalizacao(){
        return this.LocalDoIngresso;
    }
    
    public void imprimeLocalizacao(String local){
    	
        local = this.LocalDoIngresso;

        System.out.println(" Local : "+ local);
        System.out.println("");
    }

}
