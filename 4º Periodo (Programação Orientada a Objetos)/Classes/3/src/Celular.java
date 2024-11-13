import java.util.Scanner;

public class Celular {

    double preco;
    String modelo;
    String cor;

    public Celular(Double preco, String modelo, String cor) {

        this.preco = preco;
        this.modelo = modelo;
        this.cor = cor;

    }

    void exibeCelular() {

        System.out.println("        Informações do celular ");
        System.out.println("");
        System.out.println("");
        System.out.println(" PREÇO  : " + this.preco);
        System.out.println(" MODELO : " + this.modelo);
        System.out.println(" COR    : " + this.cor);
        System.out.println(" ");

    }

}
