import java.util.Scanner;

public class Cachorro {

    int id;
    String nome;
    String raca;
    String corDoPelo;
    String dataDeNascimento;

    public Cachorro() {

        this.nome = "";
        this.raca = "";
        this.corDoPelo = "";
        this.id = 0;
        this.dataDeNascimento = "";

    }

    void cadastraCachorro() {

        Scanner entrada = new Scanner(System.in);

        System.out.println(" ID do cachorro     : ");
        this.id = entrada.nextInt();

        System.out.println(" Nome do cachorro   : ");
        this.nome = entrada.nextLine();

        System.out.println(" Raça do cachorro   : ");
        this.raca = entrada.nextLine();

        System.out.println(" Cor do pelo        : ");
        this.corDoPelo = entrada.nextLine();

        System.out.println(" Data do nascimento : ");
        this.dataDeNascimento = entrada.nextLine();

    }

    void exibeCachorro() {

        System.out.println("    --- Informações --- ");
        System.out.println(" ID do cachorro     : " + this.id);
        System.out.println(" Nome do cachorro   : " + this.nome);
        System.out.println(" Raça do cachorro   : " + this.raca);
        System.out.println(" Cor do pelo        : " + this.corDoPelo);
        System.out.println(" Data do nascimento : " + this.dataDeNascimento);

    }

    void latir() {

        System.out.println(" miiiiiaaaaaaaaaaaauuuuuuuuuuuuuuuuuuuuuuuuuuuuu ");

    }

    void pegarBolinha(int localizacao) throws InterruptedException {

        int i;

        for (i = 0; i < localizacao; i++) {

            System.out.printf("\n Cachorro na posição %d indo buscar a bolinha \n\n", i);
            Thread.currentThread();
            Thread.sleep(1000);

        }
        System.out.println(" Achei a bolinha ");

        for (i = localizacao; i == 0; i--) {

            System.out.println(" Cachorro voltando, posição" + i);
            Thread.currentThread();
            Thread.sleep(1000);

        }
        System.out.println(" Bolinha devolvida");

    }

    void dormir(int tempo) throws InterruptedException {

        System.out.println(" Dormindo ");
        for (int i = 0; i < tempo; i++) {

            System.out.println("z");
            Thread.currentThread();
            Thread.sleep(1000);
        }
        latir();
    }

    @SuppressWarnings("resource")
    public static void main(String[] args) throws InterruptedException {

        Scanner entrada = new Scanner(System.in);

        Cachorro c = new Cachorro();

        int menu;
        int tempoSono = 0;
        int bola = 0;

        do {

            System.out.println(" 0 - Sair ");
            System.out.println(" 1 - Cadastrar cachorro ");
            System.out.println(" 2 - Exibir informações ");
            System.out.println(" 3 - Pegar Bolinha ");
            System.out.println(" 4 - Latir ");
            System.out.println(" 5 - Dormir   ");
            menu = entrada.nextInt();

            switch (menu) {

                case 0:

                    System.out.println(" Adios ");
                    System.exit(0);

                    break;

                case 1:
                    c.cadastraCachorro();
                    break;

                case 2:
                    c.exibeCachorro();
                    break;

                case 3:
                    System.out.println(" Informe  um valor numérico que indica a localização da bolina ");
                    bola = entrada.nextInt();
                    c.pegarBolinha(bola);
                    break;

                case 4:
                    c.latir();
                    break;

                case 5:
                    System.out.println(" Informe o tempo do sono ");
                    tempoSono = entrada.nextInt();
                    c.dormir(tempoSono);
                    break;

                default:
                    System.out.println(" Opção Invalida ");
                    break;
            }

        } while (menu != 0);
    }

}
