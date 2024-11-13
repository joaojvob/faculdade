import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner entrada = new Scanner(System.in);
        Banda banda[] = new Banda[1];
        int menu;
        int op = 0;
        do {

            System.out.println(" 0 - Sair ");
            System.out.println(" 1 - Cadastrar banda ");
            System.out.println(" 2 - Exibir banda ");
            menu = entrada.nextInt();

            switch (menu) {

                case 0:

                    System.out.println(" Adios ");
                    System.exit(0);

                    break;

                case 1:
                    System.out.println(
                            " Deseja cadastras quantas bandas ? \n lembrando que tera que preencher TUDO primeiro antes de ir para a proxima ");
                    op = entrada.nextInt();
                    for (int i = 0; i < op; i++) {
                        banda[i] = new Banda();
                        banda[i].cadastraBanda();

                    }

                    break;

                case 2:

                    for (int i = 0; i < op; i++) {

                        banda[i].exibeBanda();

                    }
                    break;

                case 3:

                    break;

                case 4:

                    break;

                case 5:

                    break;

                default:
                    System.out.println(" Op��o Invalida ");
                    break;
            }

        } while (menu != 0);
    }

}
