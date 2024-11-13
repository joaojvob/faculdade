import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Map.Entry;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTable;
import javax.swing.JTextField;

import TimeA.TimeA;
import TimeA.TimeA_DAO;
import TimeA.TimeA_controller;

import TimeB.TimeB;
import TimeB.TimeB_DAO;
import TimeB.TimeB_controller;


import javax.swing.JMenu;
import javax.swing.JList;

public class CMQMO {

	private JFrame frame;
	private JTextField inputNome;
	private JTextField inputData;
	private JLabel lblNewLabel;
	private JLabel lblNewLabel_3;
	private JLabel lblNewLabel_5;
	private JLabel lblNewLabel_7;
	private JLabel lblNewLabel_9;
	private JLabel lblNewLabel_11;
	private JLabel lblNewLabel_13;
	private JLabel lblNewLabel_15;
	private JLabel lblNewLabel_17;
	private JLabel lblNewLabel_19;
	private JLabel lblNewLabel_21;
	private JLabel lblNewLabel_23;
	private JLabel lblNewLabel_25;
	private JLabel lblNewLabel_27;


	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					CMQMO window = new CMQMO();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
				
			}
		});	
	}


	public CMQMO() {
		initialize();
	}


	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 907, 545);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		int i = 0;
		int jg1 = 0;
		int jg2 = 0;
		
		
		JButton btnNewButton = new JButton(" Sortear ");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				int x = (int)(Math.random()*2);
				
				if(x == 0) {
					System.out.println(""+x);
					int id1 = i+1; 
					
					if(jg1 <= 6) {
						
						String nomeTA = inputNome.getText();
						String idadeTA = inputData.getText();
						
						if(TimeA_controller.cadastraJogadores(nomeTA,id1 ,idadeTA) ) {

							JOptionPane.showMessageDialog(null, " Cadastrado com sucesso!");
							JOptionPane.showMessageDialog(btnNewButton," Jogador : " +nomeTA+"\n Foi sorteado para jogar no TIME A ");
							
							}
					
						for( Entry<String, String> categ: TimeA_controller.readAll().entrySet() ) {
				            String key = categ.getKey();
				            String value = categ.getValue();
				            //JOptionPane.showMessageDialog(null, "\n Nome do jogador : "+key + "\n Data de nascimento : R$"+value);
				            System.out.println("\n Time A "+"\n Nome do jogador : "+key + "\n Data de nascimento : "+value);
				            

						}
						
		
						
				
					}else {
						JOptionPane.showMessageDialog(null, " Não foi possivel realizar o cadastro! \n Time lotado ");
						}	
				}
				
				
				if(x == 1) {
					System.out.println(""+x);
					int id = i+1; 
					
					String nomeTB = inputNome.getText();
					String idadeTB = inputData.getText();
					
					if(jg2 <= 6) {
						if( TimeB_controller.cadastraJogadores(nomeTB,id ,idadeTB) ) {
						JOptionPane.showMessageDialog(null, " Cadastrado com sucesso!");
						JOptionPane.showMessageDialog(btnNewButton," Jogador : " +nomeTB+"\n Foi sorteado para jogar no TIME B ");
						
						for( Entry<String, String> categ: TimeB_controller.readAll().entrySet() ) {
				            String key = categ.getKey();
				            String value = categ.getValue();
				            //JOptionPane.showMessageDialog(null, "\n Nome do jogador : "+key + "\n Data de nascimento : R$"+value);
				            System.out.println("\n Time B "+"\n Nome do jogador : "+key + "\n Data de nascimento : "+value);
						}
						
						}
					}
					else {
						JOptionPane.showMessageDialog(null, " Não foi possïvel realizar o cadastro! \n Time lotado");
					}				
				}	
			}
		});
		
		
		btnNewButton.setBounds(372, 407, 128, 23);
		frame.getContentPane().add(btnNewButton);
		
		JLabel informeN = new JLabel(" Informe o nome ");
		informeN.setBounds(397, 191, 113, 14);
		frame.getContentPane().add(informeN);
		
		inputNome = new JTextField();
		inputNome.setBounds(372, 208, 149, 20);
		frame.getContentPane().add(inputNome);
		
		inputNome.setColumns(10);
		
		inputData = new JTextField();
		inputData.setBounds(372, 257, 149, 20);
		frame.getContentPane().add(inputData);
		inputData.setColumns(10);
		
		lblNewLabel = new JLabel(" Informe a data de nascimento ");
		lblNewLabel.setBounds(372, 239, 208, 14);
		frame.getContentPane().add(lblNewLabel);
		
		/*
		JLabel lblNewLabel_1 = new JLabel(" Jogador 1 - "+inputNome.getText());
		lblNewLabel_1.setBounds(43, 80, 170, 14);
		frame.getContentPane().add(lblNewLabel_1);
		

		lblNewLabel_15 = new JLabel("Jogador 1 -");
		lblNewLabel_15.setBounds(681, 80, 170, 14);
		frame.getContentPane().add(lblNewLabel_15);
		
		lblNewLabel_17 = new JLabel("Jogador 2 -");
		lblNewLabel_17.setBounds(681, 118, 170, 14);
		frame.getContentPane().add(lblNewLabel_17);
		
		lblNewLabel_19 = new JLabel("Jogador 3 -");
		lblNewLabel_19.setBounds(681, 161, 170, 14);
		frame.getContentPane().add(lblNewLabel_19);
		
		lblNewLabel_21 = new JLabel("Jogador 4 -");
		lblNewLabel_21.setBounds(681, 208, 170, 14);
		frame.getContentPane().add(lblNewLabel_21);
		
		lblNewLabel_23 = new JLabel("Jogador 5 -");
		lblNewLabel_23.setBounds(681, 257, 170, 14);
		frame.getContentPane().add(lblNewLabel_23);
		
		lblNewLabel_25 = new JLabel("Jogador 6 -");
		lblNewLabel_25.setBounds(681, 304, 170, 14);
		frame.getContentPane().add(lblNewLabel_25);
		
		lblNewLabel_27 = new JLabel("Jogador 7 -");
		lblNewLabel_27.setBounds(681, 350, 170, 14);
		frame.getContentPane().add(lblNewLabel_27);
		*/
		
		
	}
}
