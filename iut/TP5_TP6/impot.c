#include <stdio.h>

double montant_impot(double R, double n)
{
    double res;

    res = R/n;
    if (res >= 500)
        R = R * 0.2;
    else if (res < 500)
        R = R * 0.1;
    return R;
}

double revenu_net(double R, double n)
{
    double res;

    res = R - montant_impot(R,n);
    return res;
}

void impot(double R, int n)
{
    double montant, impot;

    montant = montant_impot(R,n);
    impot = revenu_net(R,n);
    printf("\nLe montant des impots est de : %f\n", montant);
    printf("Le revenue net est de : %f", impot);
}

int main()
{
    int n;
    double R;
    printf("Revenue : ");
    scanf("%lf",&R);
    printf("Nombres de membres du foyer : ");
    scanf("%i", &n);
    impot(R,n);
    return 0;
}
