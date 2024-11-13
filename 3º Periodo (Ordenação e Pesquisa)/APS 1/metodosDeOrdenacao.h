#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_SENHAS 10 // lembrar de mudar !!!!!
#define TESTE 10

typedef struct senha
{
    char *string;
    int tamanho;
    int frequencia;
} tipoSenha;

/////////////////////////////////////////////////////////

void shellSort(tipoSenha **senhas, char *filepath)
{
    FILE *arquivo;
    tipoSenha **Dado_temp;
    int i = 0;
    int tam;
    int freq;
    char pass[200];

    arquivo = fopen(filepath, "r");

    if (arquivo == NULL)
    {
        printf("\n Houve um erro ao abrir o arquivo . \n ");
        return;
    }

    while (!feof(arquivo))
    {
        fscanf(arquivo, "%d %d %[^\n]", &tam, &freq, pass);
        senhas[i] = (tipoSenha *)malloc(sizeof(tipoSenha));
        senhas[i]->tamanho = tam;
        senhas[i]->frequencia = freq;
        senhas[i]->string = (char *)malloc((tam + 1) * sizeof(char));
        pass[tam] = '\0';
        strcpy(senhas[i]->string, pass);
        i++;
    }

    int h, j;
    char passAux[200];

    clock_t inicio;
    inicio = clock();

    while (h < MAX_SENHAS)
    {
        h = 3 * h + 1;
    }

    while (h > 1)
    {
        h /= 3;
        for (i = 0; i < MAX_SENHAS; i++)
        {
            strcpy(passAux, senhas[i]->string);
            j = i - h;
            while (j >= 0 && strcmp(passAux, senhas[j]->string) < 0)
            {
                Dado_temp = senhas[i];
                senhas[i] = Dado_temp[j];
                senhas[i] = Dado_temp;
                strcpy(senhas[j + h]->string, senhas[j]->string);
                j -= h;
            }
            strcpy(senhas[j + h]->string, passAux);
        }
    }

    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("\n Tempo gasto ordenando os arquivos : %f ms. \n ", tempo);
    printf("\n\n");

    fclose(arquivo);
}

int minimo_indice(tipoSenha **senhas, int i, int tam)
{
    int min = i;
    int aux;
    char min_str[20];
    strcpy(min_str, senhas[i]->string);

    for (aux = i + 1; aux <= tam; aux++)
        if (strcmp(min_str, senhas[aux]->string) > 0)
        {
            strcpy(min_str, senhas[aux]->string);
            min = aux;
        }

    return min;
}

void troca_elemento(tipoSenha **senhas, int i, int min)
{
    char aux[20];
    strcpy(aux, senhas[i]->string);
    strcpy(senhas[i]->string, senhas[min]->string);
    strcpy(senhas[min]->string, aux);
}

void selectionSort(tipoSenha **senhas, char *filepath)
{
    FILE *arquivo;

    int i = 0;
    int tam;
    int freq;
    char pass[200];

    arquivo = fopen(filepath, "r");

    if (arquivo == NULL)
    {
        printf("\n Houve um erro ao abrir o arquivo . \n ");
        return;
    }

    while (!feof(arquivo))
    {
        fscanf(arquivo, "%d %d %[^\n]", &tam, &freq, pass);
        senhas[i] = (tipoSenha *)malloc(sizeof(tipoSenha));
        senhas[i]->tamanho = tam;
        senhas[i]->frequencia = freq;
        senhas[i]->string = (char *)malloc((tam + 1) * sizeof(char));
        pass[tam] = '\0';
        strcpy(senhas[i]->string, pass);
        i++;
    }

    int h, j;
    int min;
    char passAux[200];

    clock_t inicio;
    inicio = clock();

    for (i = 0; i < MAX_SENHAS; i++)
    {
        min = minimo_indice(senhas, i, tam - 1);

        if (min != i)
        {
            troca_elemento(senhas, i, min);
        }
    }

    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("\n Tempo de ordenação : %f ms. \n ", tempo);
    printf("\n\n");

    fclose(arquivo);
}

//////////////////////////////////////////////////
/* TESTES / OUTROS METODOS  */
//////////////////////////////////////////////////

void insertion(tipoSenha **senhas, char *filepath)
{
    FILE *arquivo;
    printf("\n entrando na função\n ");

    int i = 0;
    int tam;
    int freq;
    char pass[200];

    arquivo = fopen(filepath, "r");

    if (arquivo == NULL)
    {
        printf("\n Houve um erro ao abrir o arquivo . \n ");
        return;
    }

    while (!feof(arquivo))
    {
        fscanf(arquivo, "%d %d %[^\n]", &tam, &freq, pass);
        senhas[i] = (tipoSenha *)malloc(sizeof(tipoSenha));
        senhas[i]->tamanho = tam;
        senhas[i]->frequencia = freq;
        senhas[i]->string = (char *)malloc((tam + 1) * sizeof(char));
        pass[tam] = '\0';
        strcpy(senhas[i]->string, pass);
        i++;
    }

    printf("\n Depois de ler o arquivo \n ");
    int h, j;
    char passAux[200];

    clock_t inicio;
    inicio = clock();

    printf("\n Antes de começar a ordenar \n ");
    for (i = 1; i < TESTE; i++)
    {
        printf("\n entrei no for \n ");

        printf("\n antes de fazer a copia \n ");
        strcpy(passAux, senhas[i]->string);
        printf("\n depois de fazer a copia\n ");

        int aux = i - 1;
        while (aux >= 0 && (strcmp(senhas[aux]->string, passAux) > 0))
        {
            printf("\n entrando no while  se \n");
            strcpy(senhas[aux + 1]->string, senhas[aux]->string);
            printf("\n fazendo a copia se a comparação for verdadeira  \n ");

            aux = aux - 1;
        }
        printf("\n fazendo a copia se nao entrar no while \n ");
        strcpy(senhas[aux + 1]->string, passAux);
    }
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("\n Tempo de ordenação  : %f ms. \n ", tempo);
    printf("\n\n");

    fclose(arquivo);
}

void mergeSort(tipoSenha **senhas, int inicio, int final)
{

    FILE *arquivo;

    int i = 0;
    int tam;
    int freq;
    char pass[200];

    arquivo = fopen("teste.txt", "r");

    if (arquivo == NULL)
    {
        printf("\n Houve um erro ao abrir o arquivo . \n ");
        return;
    }

    while (!feof(arquivo))
    {
        fscanf(arquivo, "%d %d %[^\n]", &tam, &freq, pass);
        senhas[i] = (tipoSenha *)malloc(sizeof(tipoSenha));
        senhas[i]->tamanho = tam;
        senhas[i]->frequencia = freq;
        senhas[i]->string = (char *)malloc((tam + 1) * sizeof(char));
        pass[tam] = '\0';
        strcpy(senhas[i]->string, pass);
        i++;
    }

    int metade;
    int tamanhoAuxiliar;
    int posAux, j;
    char **vetorAuxiliar;

    if (inicio == final)
    {
        return;
    }
    printf("\nteste1\n");
    metade = (inicio + final) / 2;

    printf("\nteste2\n");

    mergeSort(senhas, inicio, metade);

    printf("\nteste3\n");

    mergeSort(senhas, metade + 1, final);

    printf("\nteste4\n");

    tamanhoAuxiliar = final - inicio + 1;

    printf("\nteste5\n");

    vetorAuxiliar = (char **)malloc(tamanhoAuxiliar * sizeof(char));

    printf("\nteste6\n");

    posAux = 0;
    i = inicio;
    j = metade + 1;

    printf("\nteste7\n");

    while (posAux < tamanhoAuxiliar)
    {
        printf("\nentrei no while\n");
        if (j > final)
        {
            printf("\n entrei no if j > final \n");
            strcpy(vetorAuxiliar[posAux], senhas[i]->string);
            printf("\nfiz a copia do if j > final \n");
            i++;
            posAux++;
            continue;
        }

        if (i > metade)
        {
            printf("\nentrei no if i > metade \n");
            strcpy(vetorAuxiliar[posAux], senhas[j]->string);
            printf("\nfiz a copia do if i > metade  \n");
            j++;
            posAux++;
            continue;
        }

        if (strcmp(senhas[i]->string, senhas[j]->string) > 0)
        {
            printf("\nentrei no if se caso a comparação de certo \n");
            strcpy(vetorAuxiliar[posAux], senhas[i]->string);
            printf("\nfiz a copia\n");

            posAux++;
            i++;
        }
        else
        {
            printf("\nentrei no else\n");
            strcpy(vetorAuxiliar[posAux], senhas[j]->string);
            printf("\nfiz a copia no else\n");
            posAux++;
            j++;
        }
    }
    printf("\nsai do while \n");
    posAux = 0;
    i = inicio;

    for (posAux = 0; posAux < tamanhoAuxiliar; posAux++)
    {
        strcpy(senhas[i]->string, vetorAuxiliar[posAux]);
        i++;
    }

    free(vetorAuxiliar);
}

void bubbleSort(tipoSenha **senhas, int tamanho, char *filepath)
{
    FILE *arquivo;

    printf("\n abrindo arquivo \n");
    int i = 0;
    int tam;
    int freq;
    char pass[200];

    arquivo = fopen(filepath, "r");

    if (arquivo == NULL)
    {
        printf("\n Houve um erro ao abrir o arquivo . \n ");
        return;
    }

    while (!feof(arquivo))
    {
        fscanf(arquivo, "%d %d %[^\n]", &tam, &freq, pass);
        senhas[i] = (tipoSenha *)malloc(sizeof(tipoSenha));
        senhas[i]->tamanho = tam;
        senhas[i]->frequencia = freq;
        senhas[i]->string = (char *)malloc((tam + 1) * sizeof(char));
        pass[tam] = '\0';
        strcpy(senhas[i]->string, pass);
        i++;
    }
    printf("\nterminei de ler\n");
    int continua, fim = tamanho;
    char *aux = malloc(sizeof(char) * 50);

    do
    {
        printf("\nentrei no do\n");
        continua = 0;

        for (i = 0; i < tamanho - 1; i++)
        {
            printf("\nentrei no for\n");

            int tam1 = strlen(senhas[i]->string);
            int tam2 = strlen(senhas[i + 1]->string);
            int tamMax;
            if (tam1 > tam2)
            {
                tamMax = tam1;
            }
            else
            {
                tamMax = tam2;
            }
            if (strncmp(senhas[i]->string, senhas[i + 1]->string, tamMax) > 0)
            {
                strcpy(aux, senhas[i]->string);
                strcpy(senhas[i]->string, senhas[i + 1]->string);
                strcpy(senhas[i + 1]->string, aux);
                continua = i;
            }
        }
        fim--;
    } while (continua != 0);
}