import java.util.Scanner;

public class LinhaAerea {

    Piloto pilotos[];
    String cidadeO;
    String cidadeD;
    float preco;

    public LinhaAerea() {

        this.cidadeO = "";
        this.cidadeD = "";
        this.preco = 0;
        this.pilotos = new Piloto[5];

    }

    void cadastraL() {

        Scanner entrada = new Scanner(System.in);

        String nomeP;
        String id;
        int i;

        System.out.println(" Cidade de origem  : ");
        this.cidadeO = entrada.nextLine();

        System.out.println(" Cidade de destino : ");
        this.cidadeD = entrada.nextLine();

        System.out.println(" Preço             : ");
        this.preco = entrada.nextFloat();

        for (i = 0; i < 5; i++) {

            System.out.println(" Nome do piloto : " + (i + 1));
            nomeP = entrada.nextLine();

            System.out.println(" ID do piloto   : " + (i + 1));
            id = entrada.nextLine();
            this.pilotos[i] = new Piloto(nomeP, id);
        }

    }

    void exibeLinhaAerea() {
        int i;

        System.out.println(" --- Comprovante ---");
        System.out.println(" Cidade de Origem  :" + this.cidadeO);
        System.out.println(" Cidade de destino :" + this.cidadeD);
        System.out.println(" Preço             :" + this.preco);

        for (i = 0; i < 5; i++) {
            this.pilotos[i].exeibeP();
        }
    }

}
