#include <math.h>
#include <stdio.h>

void chute(double hauteur)
{
    double g = 9.80665;
    double res;
    int i,test;

    i = 0;
    res = 2 * hauteur;
    res = res / g;
    res = sqrt(res);
    test = res;
    printf("%i %f\n", test, res);
    while (test != 0)
    {
        printf("%is : %f m\n",i, hauteur);
        test = test - 1;
        i++;
        hauteur = hauteur - (0.5*g*i*i);
    }
    printf("%is : boum",i);
}

int main()
{
    chute(100);
    return 0;
}
