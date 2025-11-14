#include <stdio.h>

int choixvalide(int n)
{
    if (n >= 1 && n <= 3)
        return 1;
    else
        return 0;
    
}

int jeux(int nb_allumette, int joueur_depart)
{
    int nb;

    printf("Le nombre d'allumettes dans le jeu est egal a %i\n", nb_allumette);
    printf("Quel est le nombre d'allumette prises par le joueur %i ? \n", joueur_depart);
    scanf("%i",&nb);
    if (choixvalide(nb))
        return nb_allumette - nb;
    else
    {
        printf("Votre choix n'ai pas valide.\n");
        return jeux(nb_allumette, joueur_depart);  
    }  
}

void allumette1(int nb_allumette, int joueur_depart)
{
    while (nb_allumette >= 2)
    {
        if (joueur_depart == 1)
        {
            nb_allumette = jeux(nb_allumette, joueur_depart);
            joueur_depart = 2;
        }
        else if (joueur_depart == 2)
        {
            nb_allumette = jeux(nb_allumette, joueur_depart);
            joueur_depart = 1;
        }
        else
        {
            printf("Le nb est trop grand.");
            return;
        }
    }
    if (nb_allumette !=0)
    {
        if (joueur_depart == 1)
            joueur_depart = 2;
        else
            joueur_depart = 1;
    }
    
    printf("Bravo !!! Le joueur %i a gagner.", joueur_depart);
    
}
int main()
{
    allumette1(6,2);
    return 0;
}
