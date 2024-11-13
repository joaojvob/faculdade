package contaCorrente;


import javax.swing.JOptionPane;

public class Conta {


    Conta(String agencia, String titular, double saldo) {
        this.agencia = agencia;
        this.titular = titular;
        this.saldo = saldo;
    }

    private String agencia;
    private String titular;
    private double saldo;


    public String getAgencia() {
        return agencia;
    }

    public void setAgencia(String agencia) {
        this.agencia = agencia;
    }

    public String getTitular() {
        return titular;
    }

    public void setTitular(String titular) {
        this.titular = titular;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }


    void depositar(double valor) {
        if (valor > 0) {
            setSaldo(getSaldo() + valor);
        } else {
            System.exit(0);
        }
    }

    void sacar(double valor) {
        if (getSaldo() > 0 && getSaldo() >= valor) {
            setSaldo(getSaldo() - valor);
        } else {
            JOptionPane.showMessageDialog(null, getTitular() + " seu saldo e insuficiente!");
        }
    }

    void imprimirSaldo() {
        JOptionPane.showMessageDialog(null, getTitular() + " seu saldo e R$ " + getSaldo());

    }
}
