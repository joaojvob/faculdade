#include "estrutura.h"

int bit(char *str, int b)
{
    if (str == NULL)
        return 0;
    char c = str[b / 8];
    int bb = 1, i = 0;
    bb = 128 >> (b % 8);
    return (c & bb) != 0;
}
//Patrícia
link patriciaSearch(char *v, link x)
{
    link p;
    do
    {
        p = x;
        if (bit(v, x->b))
            x = x->right;
        else
            x = x->left;
    } while (p->b < x->b);
    return x;
}

/* 
    A função de acima só identifica um nó candidato.O string v deve ser comparado
        à chave associada ao nó.Patrícia
            */

link patriciaInsert(char *v, link x)
{
    link p;
    link t = patriciaSearch(v, x);
    if (strcmp(v, t->key) != 0)
    {
        int i = 0;
        while (bit(v, i) == bit(t->key, i))
            i++;
        do
        {
            p = x;
            if (bit(v, x->b))
                x = x->right;
            else
                x = x->left;
        } while ((x->b < i) && (p->b < x->b));
        t = malloc(sizeof(node));
        t->key = v;
        t->b = i;
        if (bit(v, i))
        {
            t->right = t;
            t->left = x;
        }
        else
        {
            t->left = t;
            t->right = x;
        }
        if (bit(v, p->b))
            p->right = t;
        else
            p->left = t;
    }
    return t;
}

int main(int argc, char const *argv[])
{
    char str;
    link x;

    fflush(stdin);
    scanf("%s", &str);

    patriciaInsert(str, x);

    printf("%s", x->key);

    return 0;
}
