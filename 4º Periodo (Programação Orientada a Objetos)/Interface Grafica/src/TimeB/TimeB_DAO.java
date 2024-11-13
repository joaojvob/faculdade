package TimeB;

import java.util.ArrayList;


public class TimeB_DAO {

	private static ArrayList<TimeB> lista = new ArrayList<>();
	
	public static boolean create( TimeB c) {
		if( lista.add(c) )
			return true;
		else
			return false;
	}
	
	public static ArrayList<TimeB> readAll() {
		return lista;
	}

}
