#include <stdio.h>

double affranchissement(double poids, int nb_jours)
{
    double res;
    if (nb_jours == 1)
    {
        if (poids <= 20)
            return 1.28;
        else if (poids > 20 && poids <= 100)
            return 1.28*2;
        else if (poids > 100 && poids <= 250)
            return 1.28*4;
        else if (poids > 250 && poids <= 500)
            return 1.28*6;
        else if (poids > 500 && poids <= 3000)
            return 1.28*8;
    }
    else if (nb_jours == 2)
    {
        if (poids <= 20)
            return 1.08;
        else if (poids > 20 && poids <= 100)
            return 1.08*2;
        else if (poids > 100 && poids <= 250)
            return 1.08*4;
        else if (poids > 250 && poids <= 500)
            return 1.08*6;
        else if (poids > 500 && poids <= 3000)
            return 1.08*8;
    }
    else if (nb_jours == 4)
    {
        if (poids <= 20)
            return 1.06;
        else if (poids > 20 && poids <= 100)
            return 1.06*2;
        else if (poids > 100 && poids <= 250 )
            return 1.06*4;
    }
}

int main(void)
{
    printf("Aff : %f \n", affranchissement(3000, 1));
    return 0;
}
