package Controller;

import java.util.ArrayList;

import Model.Categoria;
import model.dao.CategoriaDAO;

public class CategoriaController {

	public static boolean SalvarProduto(String id, String Nome, String preco) {
		Categoria a = new Categoria(id, Nome,preco);
		return a.Persistir();
	}

	public static ArrayList<String[]> getProduto() {
		ArrayList<String[]> Alunos = new ArrayList<String[]>();

		ArrayList<Categoria> A = Categoria.getProdutos();
		if (A != null) {
			for (int i = 0; i < A.size(); i++) {
				String a[] = new String[3];
				a[0] = A.get(i).getID_Cat();
				a[1] = A.get(i).getDescricao_Cat();
				a[2] = A.get(i).getNome_Cat();
				Alunos.add(a);
			}
		}

		return Alunos;
	}
	
	public static boolean removeCategoria(String id) {
		Categoria c = new Categoria();
		c.setID_Cat(id);
		return CategoriaDAO.delete(c);
	}
	
}
