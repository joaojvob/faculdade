import java.util.Scanner;

public class PrincipalExercicio2 {

  @SuppressWarnings("resource")
  public static void main(String[] args) {

    Scanner entrada = new Scanner(System.in);

    int numero;

    do {

      System.out.println("Informe um número entre 1 e 7 referente ao dia da semana: ");

      numero = entrada.nextInt();

      switch (numero) {

        case 0:
          System.out.println(" adios... ");

          break;

        case 1:
          System.out.println(" Domingo-feira ");
          break;

        case 2:
          System.out.println(" Segunda-feira");
          break;

        case 3:
          System.out.println(" Terça-feira");
          break;

        case 4:
          System.out.println(" Quarta-feira");
          break;

        case 5:
          System.out.println(" Quinta-feira");
          break;

        case 6:
          System.out.println(" Sexta-feira vulgo dia da maldade rsrs");
          break;

        case 7:
          System.out.println(" Sabado-feira");
          break;

        default:
          System.out.println("Número invalido");
      }

    } while (numero != 0);

  }
}