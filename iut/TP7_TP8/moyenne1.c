#include <stdio.h>

void moyenne1(double notes[], int nb_notes, double* moyenne, double* min, double* max)
{

    int i;

    i = 0;
    while (i != nb_notes)
    {
        if (i == 0)
        {
            *min = notes[i];
            *max = notes[i];
        }
        else if (*max < notes[i])
        {
            *max = notes[i];
        }
        else if (*min > notes[i])
        {
            *min = notes[i];
        }

        *moyenne = *moyenne + notes[i];

        i++;
    }
    *moyenne = *moyenne / nb_notes;
}

int main(void)
{
    double notes[] = {15, 18, 12, -3, 20, 0};
    double moyenne, min, max;
    int nb_notes = 6;
    moyenne = 0;
    min = 0;
    max = 0;
    moyenne1(notes, nb_notes, &moyenne, &min, &max);
    printf("Moyenne: %f, Min: %f, Max: %f\n", moyenne, min, max);
    return 0;
}