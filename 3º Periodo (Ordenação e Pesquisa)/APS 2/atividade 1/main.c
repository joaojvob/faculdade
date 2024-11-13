#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//pow (2,1/2);
//fabs();
double pesquisa_binaria_sqrt(double x, double inicio, double fim)
{

    double meio;
    double modulo, absoluto;

    fim = x;

    if (x <= 0)
    {
        return 0;
    }

    if (fim >= inicio)
    {
        meio = (inicio + fim) / 2.0;

        modulo = (meio * meio) - 0.000001;

        absoluto = fabs(modulo);
        // printf("\n teste \n");
        if (meio * meio == absoluto)
        {
            return meio;
        }
        else if (meio * meio < absoluto)
        {
            return pesquisa_binaria_sqrt(x, meio, fim);
        }

        else if (meio * meio > absoluto)
        {
            return pesquisa_binaria_sqrt(x, meio - 1, fim);
        }
        return pesquisa_binaria_sqrt(x, meio + 1, fim);
    }
}

int main(int argc, char const *argv[])
{

    pesquisa_binaria_sqrt(25, 0, 25);
    return 0;
}
