package contaCorrente;

import javax.swing.JOptionPane;

public class ContaTeste {

    public static void main(String[] args) {
        
         double saldoPessoa1 = 2000;
         double saldoPessoa2 = 3000;
         
         float taxaDeJurosAnual = 4;
         float tdja = 5;
         
         
         
         ContaCorrente pessoa = new ContaCorrente("1234"," João",saldoPessoa1,"567489",taxaDeJurosAnual);
         pessoa.calcularJuroMensal();

         ContaCorrente pessoa2 = new ContaCorrente("6541"," Julio",saldoPessoa2,"549874",taxaDeJurosAnual);
         pessoa2.calcularJuroMensal();
         
    	
    }
}
