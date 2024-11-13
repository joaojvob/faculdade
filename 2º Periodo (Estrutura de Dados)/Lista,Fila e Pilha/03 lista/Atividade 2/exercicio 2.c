#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct churras
{
    char nome[100];
    char numero[14];
    struct churras *proximo;
} tipoChurrasco;

typedef struct lista
{
    int quantidade;
    tipoChurrasco *primeiro;
    tipoChurrasco *ultimo;
} tipoLista;

int main()
{
    setlocale(LC_ALL, "portuguese");

    tipoLista *festa;
    tipoChurrasco *auxiliar;

    int i;
    int opcao;

    festa = (tipoLista *)malloc(sizeof(tipoLista));
    festa->quantidade = 0;
    festa->primeiro = NULL;
    festa->ultimo = NULL;

    do
    {
        printf("\n 1 - Convidar pessoa ");
        printf("\n 2 - Lista de convidados ");
        printf("\n 3 - Exibir quantidade de convidados já cadastrados \n ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            printf("\n Cadastrando pessoa ");

            if (festa->quantidade == 0)
            {

                auxiliar = (tipoChurrasco *)malloc(sizeof(tipoChurrasco));
                festa->primeiro = auxiliar;
                festa->ultimo = auxiliar;
            }
            else
            {

                auxiliar = (tipoChurrasco *)malloc(sizeof(tipoChurrasco));

                festa->ultimo->proximo = auxiliar;
                festa->ultimo = auxiliar;
            }
            auxiliar->proximo = NULL;

            printf("\n Nome : ");
            fflush(stdin);
            fgets(auxiliar->nome, 100, stdin);

            printf("\n Número de telefone : ");
            fflush(stdin);
            fgets(auxiliar->numero, 14, stdin);
            festa->quantidade++;

            break;

        case 2:

            if (festa->quantidade == 0)
            {
                printf("\n Nenhuma pessoa foi convidada para a o churras");
                return 0;
            }
            else
            {
                auxiliar = festa->primeiro;
                while (auxiliar != NULL)
                {
                    printf("\n");
                    printf("\n Nome : %s ", auxiliar->nome);
                    printf("\n Número de telefone : %s ", auxiliar->numero);
                    auxiliar = auxiliar->proximo;
                }
            }

            break;

        case 3:

            if (festa->quantidade == 0)
            {
                printf("\n Nenhuma pessoa foi convidada para a o churras");
                return 0;
            }
            else
            {
                printf("\n Total de pessoas convidadas para o churras -> %d", festa->quantidade);
                printf("\n\n");
            }

            break;
        default:

            printf("\n Opção invalida ");

            break;
        }

    } while (opcao != 0);
    printf("\n adios");
    exit(1);

    return 0;
}
