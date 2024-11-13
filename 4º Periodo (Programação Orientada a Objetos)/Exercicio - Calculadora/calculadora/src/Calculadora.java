import java.util.Scanner;

public class Calculadora {

    public int valorA;
    public int valorB;

    public Float A;
    public float B;
    public int resultado;

    public int Soma() {

        resultado = this.valorA + this.valorB;

        System.out.println(" O resultado da soma é : " + resultado);

        return resultado;
    }

    public int Sub(int a, int b) {

        this.valorA = a;
        this.valorB = b;

        if (a < b) {
            System.out.println(" O primeiro valor e menor que o segundo ");
            return 0;
        }

        resultado = this.valorA - this.valorB;

        System.out.println(" O resultado da subtração é : " + resultado);

        return resultado;

    }

    public int Div(int a, int b) {

        this.valorB = a;
        this.valorB = b;

        resultado = this.valorA / this.valorB;

        System.out.println(" O resultado da divisão é : " + resultado);

        return resultado;
    }

    public int Mult(int a, int b) {

        this.valorA = a;
        this.valorB = b;

        resultado = this.valorA * this.valorB;

        System.out.println(" O resultado da multiplicação é : " + resultado);

        return resultado;
    }

    @SuppressWarnings("resource")
    public static void main(String[] args) throws Exception {

        Scanner entrada = new Scanner(System.in);

        int menuDeOperacoes;

        int a = 0, b = 0;

        Calculadora c = new Calculadora();

        do {
            a = 0;
            b = 0;
            System.out.println("     <*> Menu Calculadora <*>    ");
            System.out.println("      ");
            System.out.println("      ");
            System.out.println(" 0 - Execultar [        sair          ] ");
            System.out.println(" 1 - Execultar [        soma          ] ");
            System.out.println(" 2 - Execultar [        divisão       ] ");
            System.out.println(" 3 - Execultar [        subtrção      ] ");
            System.out.println(" 4 - Execultar [        multiplicação ] ");

            menuDeOperacoes = entrada.nextInt();

            switch (menuDeOperacoes) {

                case 0:
                    System.out.println(" adios ... ");
                    System.exit(0);
                    break;

                case 1:

                    System.out.println("      ");

                    System.out.println(" Informe o primerio valor para realizar a soma :");
                    a = entrada.nextInt();

                    System.out.println(" Informe o segundo valor para realizar a soma  :");
                    b = entrada.nextInt();

                    c.valorA = a;
                    c.valorB = b;
                    c.Soma();

                    System.out.println("      ");
                    break;

                case 2:
                    System.out.println("      ");

                    System.out.println(" Entre com um valor :  ");
                    a = entrada.nextInt();

                    System.out.printf("\n Deseja divivir %d por : ", a);
                    b = entrada.nextInt();

                    c.valorA = a;
                    c.valorB = b;
                    c.Div(a, b);

                    System.out.println("      ");
                    break;

                case 3:

                    System.out.println("      ");

                    System.out.println(" Informe o primeiro valor : ");
                    a = entrada.nextInt();

                    System.out.printf("\n Deseja subtrair %d por : ", a);
                    b = entrada.nextInt();

                    c.valorA = a;
                    c.valorB = b;
                    c.Sub(a, b);

                    System.out.println("      ");
                    break;

                case 4:
                    System.out.println("      ");

                    System.out.println(" Informe o primeiro valor :");
                    a = entrada.nextInt();

                    System.out.printf(" Deseja multiplicar %d por : ", a);
                    b = entrada.nextInt();

                    c.valorA = a;
                    c.valorB = b;
                    c.Mult(a, b);

                    System.out.println("      ");
                    break;

                default:
                    break;
            }

        } while (menuDeOperacoes != 0);

    }
}
