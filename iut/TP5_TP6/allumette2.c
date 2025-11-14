#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int choixvalide(int n)
{
    if (n >= 1 && n <= 3)
        return 1;
    else
        return 0;
    
}

int jeuxh(int nb_allumette)
{
    int nb;

    printf("Le nombre d'allumettes dans le jeu est egal a %i\n", nb_allumette);
    printf("Quel est le nombre d'allumette que vous alez retirer ? \n");
    scanf("%i",&nb);
    if (choixvalide(nb))
        return nb_allumette - nb;
    else
    {
        printf("Votre choix n'ai pas valide.\n");
        return jeuxh(nb_allumette);  
    }  
}

int jeuxbot(int nb_allumette)
{
    int nb;

    srand(time(NULL));

    nb = rand() % (3-1+1) + 1;
    printf("Le nombre d'allumettes dans le jeu est egal a %i\n", nb_allumette);
    printf("Le nombre d'allumettes prises par l'ordinateur est egale a %i\n", nb);
    return nb_allumette - nb;

}

void allumette2(int nb_allumette, int joueur_depart)
{
    while (nb_allumette >= 2)
    {
        if (joueur_depart == 1)
        {
            nb_allumette = jeuxh(nb_allumette);
            joueur_depart = 2;
        }
        else if (joueur_depart == 2) //bot
        {
            nb_allumette = jeuxbot(nb_allumette);
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
        if (joueur_depart == 2)
            printf("Le nombre d'allumettes dans le jeu est egal a %i\nBravo !!! Vous avez gagne.\n", nb_allumette);
        else
            printf("Le nombre d'allumettes dans le jeu est egal a %i\nDommage !!! Vous avez perdue.\n", nb_allumette);
    }
    else
    {
        if (joueur_depart == 1)
            printf("Le nombre d'allumettes dans le jeu est egal a %i\nBravo !!! Vous avez gagne.\n", nb_allumette);
        else
            printf("Le nombre d'allumettes dans le jeu est egal a %i\nDommage !!! Vous avez perdue.\n", nb_allumette);
    } 
}
int main()
{
    allumette2(15,1);
    return 0;
}
