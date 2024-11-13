package TimeA;

import java.util.HashMap;
import java.util.Map;

public class TimeA_controller {

	public static boolean cadastraJogadores(String nome, int id, String idade) {
		TimeA c = new TimeA();
		c.setNome(nome);
		c.setID(id);
		c.setIdade(idade);
		return TimeA_DAO.create(c);
	}
	
	public static Map<String, String> readAll(){
		   
		Map<String, String> mapaDecategorias = new HashMap<>(); 

		for( TimeA c: TimeA_DAO.readAll() ) {	
			
			mapaDecategorias.put(c.getNome(),c.getIdade());
		}
        
        return mapaDecategorias;
        
    }

}
