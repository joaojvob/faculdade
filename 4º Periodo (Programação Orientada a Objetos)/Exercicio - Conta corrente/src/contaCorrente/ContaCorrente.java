package contaCorrente;

import java.text.DecimalFormat;
import javax.swing.JOptionPane;

public class ContaCorrente extends Conta {

    DecimalFormat decimal = new DecimalFormat("0.00"); 
    
    private String cpf;
    private static float taxaDeJurosAnual = 0;

    ContaCorrente(String agencia, String titular, double saldo, String cpf, float taxaDeJurosAnual) {
        super(agencia, titular, saldo);
        this.cpf = cpf;
        this.taxaDeJurosAnual = taxaDeJurosAnual;
    }


    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public float getTaxaDeJurosAnual() {
        return taxaDeJurosAnual;
    }

    public void taxaDeJurosAnual(float taxaDeJurosAnual) {
        ContaCorrente.taxaDeJurosAnual = taxaDeJurosAnual;
    }


    void calcularJuroMensal() {
  
       float JuroMensal = (float) (getSaldo() * getTaxaDeJurosAnual() / 12 );
       
       float mes = JuroMensal/12;
       
       float saldo = (float) (getSaldo()- mes);
       
       float ano = (float) (saldo* 12);
   
       JOptionPane.showMessageDialog(null," Nome : " + getTitular() +"\n CPF     : "+getCpf()+"\n Juro anual       : R$ " + JuroMensal+"\n Juro mensal   : R$ "+mes+"\n Saldo no mês : R$ "+saldo+"\n Saldo no ano  : R$ "+ano);
  

    }
    
}
