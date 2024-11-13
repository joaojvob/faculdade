import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);

        int i;
        double preco;
        String modelo;
        String cor;

        Celular vetorCelulares[] = new Celular[3];

        for (i = 0; i < 10; i++) {

            System.out.println(" Informe o preco ");
            preco = entrada.nextLong();

            System.out.println(" Informe o modelo do fabricante ");
            if (entrada.hasNextLine()) {
                entrada.nextLine();
            }
            modelo = entrada.nextLine();
            System.out.println(" Informe a cor ");
            if (entrada.hasNextLine()) {
                entrada.nextLine();
            }
            cor = entrada.nextLine();

            vetorCelulares[i] = new Celular(preco, modelo, cor);

        }

        for (i = 0; i < 10; i++) {
            vetorCelulares[i].exibeCelular();
        }

    }

}