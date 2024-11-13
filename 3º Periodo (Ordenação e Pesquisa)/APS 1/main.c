#include "metodosDeOrdenacao.h"

void exibirSenhas(tipoSenha **senha, char *filepath)
{
    int i;

    for (i = 0; i < MAX_SENHAS; i++)
    {
        printf("%s - %d %d\n", senha[i]->string, senha[i]->tamanho, senha[i]->frequencia);
    }
}

int main(int argc, char const *argv[])
{
    tipoSenha **senha;
    int n;
    int opcao;
    char opc;

    senha = (tipoSenha **)malloc(MAX_SENHAS * sizeof(tipoSenha *));

    do
    {
        printf("\n\n ");
        printf("\n 0 - Sair");
        printf("\n 1 - Primeiro metodo ");
        printf("\n 2 - Segundo metodo  ");
        printf("\n 3 - Outros metodos \n ");

        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0:
            free(senha);
            exit(1);
            break;

        case 1:

            printf("\n \t  Informações  \n ");
            printf("\n Metodo utilizado : Shell Sort \n ");

            shellSort(senha, "teste.txt");

            printf("\n Exibir senhas ? \n \n \t [s] = sim | [i] = não \n");
            fflush(stdin);
            scanf("%c", &opc);

            if (opc == 's' || opc == 'S')
            {
                exibirSenhas(senha, "senhas.txt");
            }
            else if (opc == 'n' || opc == 'N')
            {
                continue;
            }
            else
            {
                printf("\n Opção invalida \n ");
            }
            break;

        case 2:

            printf("\n \t  Informações  \n ");
            printf("\n Metodo utilizado : Selection Sort \n ");

            selectionSort(senha, "teste.txt");

            printf("\n Exibir senhas ? \n \n \t [s] = sim | [i] = não \n");
            fflush(stdin);
            scanf("%c", &opc);

            if (opc == 's' || opc == 'S')
            {
                exibirSenhas(senha, "teste.txt");
            }
            else if (opc == 'n' || opc == 'N')
            {
                continue;
            }
            else
            {
                printf("\n Opção invalida \n ");
            }
            break;

        case 3:
            printf("\n OBS: alguns metodos ñ estão funcionando \n");
            printf("\n a - bubble Sort");
            printf("\n b - insertion Sort");
            printf("\n c - merge Sort \n");
            fflush(stdin);
            scanf("%c", &opc);

            switch (opc)
            {
            case 'a':

                bubbleSort(senha, TESTE, "1k.txt");

                printf("\n Exibir senhas ? \n \n \t [s] = sim | [i] = não \n");
                fflush(stdin);
                scanf("%c", &opc);

                if (opc == 's' || opc == 'S')
                {
                    exibirSenhas(senha, "1k.txt");
                }
                else if (opc == 'n' || opc == 'N')
                {
                    continue;
                }
                else
                {
                    printf("\n Opção invalida \n ");
                }
                break;

            case 'b':

                insertion(senha, "teste.txt");

                printf("\n Exibir senhas ? \n \n \t [s] = sim | [i] = não \n");
                fflush(stdin);
                scanf("%c", &opc);

                if (opc == 's' || opc == 'S')
                {
                    exibirSenhas(senha, "teste.txt");
                }
                else if (opc == 'n' || opc == 'N')
                {
                    continue;
                }
                else
                {
                    printf("\n Opção invalida \n ");
                }
                break;

            case 'c':

                mergeSort(senha, 0, TESTE);

                printf("\n Exibir senhas ? \n \n \t [s] = sim | [i] = não \n");
                fflush(stdin);
                scanf("%c", &opc);

                if (opc == 's' || opc == 'S')
                {
                    exibirSenhas(senha, "teste.txt");
                }
                else if (opc == 'n' || opc == 'N')
                {
                    continue;
                }
                else
                {
                    printf("\n Opção invalida \n ");
                }
                break;

            default:
                printf("\n\n Opção invalida !\n\n");
                break;
            }

            break;

        default:
            printf("\n\n Opção invalida !\n\n");
            break;
        }

    } while (opcao != 0);

    return 0;
}
