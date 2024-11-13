import java.util.Scanner;

public class Principal {

    public static void main(String[] args) {

        LinhaAerea linha[] = new LinhaAerea[5];

        for (int i = 0; i < 5; i++) {
            linha[i] = new LinhaAerea();
            linha[i].cadastraL();
            linha[i].exibeLinhaAerea();
        }
    }
}
