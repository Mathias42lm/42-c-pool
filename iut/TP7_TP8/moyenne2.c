#include <stdio.h>

double moyenne2(double notes[], double coeff[], int nb_notes)
{
    int i;
    double res;
    
    i = 0;
    res = 0;
    while (i != nb_notes)
    {
        res = res + notes[i] * coeff[i];
        i++;
    }
    res = res / nb_notes;
    return res;
}

int main(void)
{
    double notes[] = {15, 18, 12, -3, 20, 0};
    double coeff[] = {1, 2, 3, 4, 1, 6};
    int nb_notes = 6;
    double moyenne;

    moyenne = moyenne2(notes, coeff, nb_notes);
    printf("Moyenne: %f\n", moyenne);
    return 0;
}
