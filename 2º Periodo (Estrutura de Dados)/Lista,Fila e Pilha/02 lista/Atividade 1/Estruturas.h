
typedef struct Empresa{
	
	char nomeFantasia[100];
	char razaoSocial[100];
	char CNPJ[100];	
	
}tipoEmpresa;

void Cadastro(tipoEmpresa *empresa);
void Exibir(tipoEmpresa *empresa);
