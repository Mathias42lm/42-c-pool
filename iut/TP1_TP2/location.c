#include <stdio.h>

int ft_strcmp(char s1[], char s2[])
{
    int i = 0;
    int n = 0;

    while (s1[i] == s2[n])
    {
        if (s1[i] == '\0' && s2[i] == '\0')
        {
            return 1;
        }
        i++;
        n++;
    }
    return 0;
}

double location(char type[], int duree, int km, char forfait[])
{
    double res = 0;
    double i = 0;

    if (ft_strcmp(forfait,"Forfaitaire") == 1)
    {
        if (ft_strcmp(type,"Utilitaire") == 1 )
        {
            i = ((80/2) * duree) + (km * (0.30*1.5));
            res = res + 50 + i;
        }
        else if (ft_strcmp(type,"Monospace") == 1 )
        {
            i = (75/2) * duree + km * (0.25*1.5);
            res = res + 50 + i;
        }
        else if (ft_strcmp(type,"Citadine") == 1 )
        {
            i = (60/2) * duree + km * (0.20*1.5);
            res = res + 50 + i;
        }
    }
    else
    {
        if (ft_strcmp(type,"Utilitaire") == 1 )
        {
            i = 80 * duree + km * 0.30;
            res = res + 50 + i;
        }
        else if (ft_strcmp(type,"Monospace") == 1 )
        {
            i = 75 * duree + km * 0.25;
            res = res + 50 + i;
        }
        else if (ft_strcmp(type,"Citadine") == 1 )
        {
            i = 60 * duree + km * 0.20;
            res = res + 50 + i;
        }
    }

    if (duree >= 4 && km >= 2000)
    {
        res = res * 0.95;
    }

    return res;
}

int main(void)
{
    printf("Prix %f\n", location("Utilitaire", 1, 1, "Forfaitaire"));
    printf("Prix %f\n\n", location("Utilitaire", 1, 1, "Base"));

    printf("Prix %f\n", location("Monospace", 1, 1, "Forfaitaire"));
    printf("Prix %f\n\n", location("Monospace", 1, 1, "Base"));

    printf("Prix %f\n", location("Citadine", 1, 1, "Forfaitaire"));
    printf("Prix %f\n", location("Citadine", 1, 1, "Base"));

    
    return 0;
}
