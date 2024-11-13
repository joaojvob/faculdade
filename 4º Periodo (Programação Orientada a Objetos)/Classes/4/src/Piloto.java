
public class Piloto {

    String nome;
    String id;

    public Piloto(String nome, String id2) {
        this.nome = nome;
        this.id = id2;
    }

    public void exeibeP() {

        System.out.println(" Piloto : " + this.nome);
        System.out.println(" ID     : " + this.id);

    }

}
