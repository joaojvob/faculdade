
typedef struct mensagens{
	
	char numeroDoDestinatario[16];
	char horaDoEnvio[5];
	char dataDoEnvio[11];
	char mensagem[250];
	
}tipoSMS;
void sms(tipoSMS *SMS );
void exibirSMS(tipoSMS *SMS);
