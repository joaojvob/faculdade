#include "estruturas.h"

int main(int argc, char const *argv[])
{
    int parametro = 1;
    int verifica;
    char opcao;
    unsigned int discos = 7;

    tipoPilha *A = criarPilha();
    tipoPilha *B = criarPilha();
    tipoPilha *C = criarPilha();

    tipoFila *fila;
    fila = iniciaFilaDeJogadores();

    tipoListaDePontos *lista;
    lista = iniciaListaDePontos();

    tipoListaDeJogadores *listaDeJogadores;
    listaDeJogadores = iniciaListaDeJogadores();

    tipoJogador *auxiliar;

    do
    {
        printf("\n\n --------MENU-------- ");
        printf("\n 1 - Cadastrar monges ");
        printf("\n 2 - Iniciar Jogo  ");
        printf("\n 3 - Exibir jogadores ");
        printf("\n 0 - Sair \n ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch (opcao)
        {
        case '1':
            if (fila->quantidade >= 1)
            {
                printf("\n Ja tem um jogador da fila, termine de a vez dele ");
            }
            else
            {
                insereNaFilaDeJogadores(fila);
            }
            break;

        case '2':
            system("cls");
            if (fila->quantidade == 0)
            {
                printf("\n Primeiro cadastre um monge \n ");
            }
            else
            {

                while (parametro != 1000)
                {
                    switch (parametro)
                    {
                    case 1:

                        parametro = inicializarPilha(A, &discos);

                        break;

                    case 2:

                        exibirPinos(A, B, C);

                    case 3:

                        exibeFila(fila);
                        informarPossibilidades(A, B, C);

                    case 4:

                        parametro = moveDiscos(A, B, C);

                        break;

                    case 5:

                        if (tamanho(C) == discos)
                        {
                            parametro = 6;
                        }
                        else
                        {
                            parametro = 2;
                        }
                        break;

                    case 6:

                        terminarJogo(A, B, C);
                        parametro = 1000;

                        break;
                    }
                }
            }
            system("cls");
            terminarJogo(A, B, C);
            printf("\n Jogo Finalizado \n ");

            exibeFila(fila);

            auxiliar = removeDaFila(fila);
            insereNoFinalDaLista(listaDeJogadores, auxiliar);

            break;

        case '3':

            exibeLista(listaDeJogadores);
            break;

        default:
            if (opcao == '0')
            {
                printf("\n Adios ...");
                exit(1);
            }
            else
            {
                printf("\n Opção invalida");
            }

            break;
        }

    } while (opcao);
}
