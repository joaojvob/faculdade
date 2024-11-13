
typedef struct pessoa{
	
	char nome[100];
	char sexo[10];
	float salario;
	int idade;
	int quantidade;
	int id;
	int vetPessoa[100];
		
}tipoPessoa;

void cadastraPessoa(tipoPessoa *pessoa);
void imprimePessoa(tipoPessoa *pessoa);
void editaPessoa(tipoPessoa *pessoa);
