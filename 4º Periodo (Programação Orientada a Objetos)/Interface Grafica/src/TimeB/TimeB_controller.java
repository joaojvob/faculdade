package TimeB;

import java.util.HashMap;
import java.util.Map;

public class TimeB_controller {

	public static boolean cadastraJogadores(String nome, int id, String idade) {
		TimeB c = new TimeB();
		c.setNome(nome);
		c.setID(id);
		c.setIdade(idade);
		return TimeB_DAO.create(c);
	}
	
	public static Map<String, String> readAll(){
		   
		Map<String, String> mapaDecategorias = new HashMap<>(); 

		for( TimeB c: TimeB_DAO.readAll() ) {	
			
			mapaDecategorias.put(c.getNome(),c.getIdade());
		}
        
        return mapaDecategorias;
        
    }

}
