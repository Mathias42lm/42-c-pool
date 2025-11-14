#include <stdio.h>

int premavcn(int k, int n)
{
    int tmp;
    while (n != 0)
    {
        tmp = k % n;
        k = n;
        n = tmp;   
    }
    if (k == 1)
        return 1;
    return 0;
}

int indicatrice(int n)
{
    int res; 
    int k;

    k = 1;
    res = 0;
    while (k <= n)
    {
        if (premavcn(k, n))
            res++;
        k++;
    }
    return res;
}

int main(void)
{
    int n;
    printf("N : ");
    scanf("%i", &n);
    printf("Le resultat est : %i",indicatrice(n));
    return 0;
}
