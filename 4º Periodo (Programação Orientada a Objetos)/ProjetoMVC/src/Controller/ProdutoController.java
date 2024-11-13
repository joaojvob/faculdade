package Controller;

import Model.Produto;
import java.util.ArrayList;

public class ProdutoController {
	
	
	public static boolean SalvarProduto(String id, String Nome, String preco) {
		Produto a = new Produto(id, Nome,preco);
		return a.Persistir();
	}

	public static ArrayList<String[]> getProduto() {
		ArrayList<String[]> Alunos = new ArrayList<String[]>();

		ArrayList<Produto> A = Produto.getProdutos();
		if (A != null) {
			for (int i = 0; i < A.size(); i++) {
				String a[] = new String[3];
				a[0] = A.get(i).getID();
				a[1] = A.get(i).getNome();
				a[2] = A.get(i).getPreco();
				Alunos.add(a);
			}
		}

		return Alunos;
	}
	
	
	
}