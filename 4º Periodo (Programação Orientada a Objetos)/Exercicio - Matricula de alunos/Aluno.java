package Atividade_1;

public class Aluno extends Pessoa{
	
	protected String matricula;
	protected int desconto;
	
	public Aluno(String MT,int Desc, String nome) {
		super(nome);
		this.matricula = MT;
		this.desconto = Desc;
	}
	
	public Aluno() {
		matricula = "";
		desconto = 0;
	}
	
	public void verInformacoes() {
		System.out.println(" --- Aluno(a) ---");
		System.out.println(" Matricula : " + matricula);
		System.out.println(" Nome      : " + nome);
		System.out.println("------------------");
	}


	@Override
	public double calcularGanhos() {
		// TODO Auto-generated method stub
		return 0;
	}

}
