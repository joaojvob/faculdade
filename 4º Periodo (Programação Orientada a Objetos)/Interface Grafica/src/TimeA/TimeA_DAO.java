package TimeA;

import java.util.ArrayList;

public class TimeA_DAO {

	private static ArrayList<TimeA> lista = new ArrayList<>();
	
	public static boolean create( TimeA c) {
		if( lista.add(c) )
			return true;
		else
			return false;
	}
	
	public static ArrayList<TimeA> readAll() {
		return lista;
	}

}
