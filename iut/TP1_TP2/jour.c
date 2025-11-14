#include <stdio.h>

int est_bissextile(int annee) {
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        return 1;
    }
    return 0;
}

void jour() {
    
    int annee, mois, jour;

    printf("Entrez le jour: ");
    scanf("%d", &jour);
    printf("Entrez le mois: ");
    scanf("%d", &mois);   
    printf("Entrez l'année: ");
    scanf("%d", &annee);

    if (jour > 31 || (mois == 2 && jour >29))
    {
        printf("Erreur jours\n");
        return;
    }
    if (mois > 12)
    {
        printf("Erreur mois trop grand\n");
        return;
    }
    if (annee < 1600 || annee > 2100)
    {
        printf("Erreur mauvaise intervall\n");
        return;
    }
    

    int dernier_chiffre_annee = annee % 100;

    int quart = dernier_chiffre_annee / 4;
    int nombre_initial = dernier_chiffre_annee + quart;

    
    int mois_tableau[] = {1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6};
    nombre_initial += mois_tableau[mois - 1];


    if (est_bissextile(annee) && (mois == 1 || mois == 2)) 
    {
        nombre_initial -= 1;
    }

    

    int valeur_siecle;
    if (annee >= 1600 && annee < 1700)
        valeur_siecle = 6;
    else if (annee >= 1700 && annee < 1800)
        valeur_siecle = 4;
    else if (annee >= 1800 && annee < 1900) 
        valeur_siecle = 2;
    else if (annee >= 1900 && annee < 2000)
        valeur_siecle = 0;
    else if (annee >= 2000 && annee < 2100) 
        valeur_siecle = 6;
    else if (annee >= 2100 && annee < 2200) 
        valeur_siecle = 4;
    

    nombre_initial += valeur_siecle;

    nombre_initial += jour;

    int jour_semaine = nombre_initial % 7;

    char* jours[] = {"Dimanche", "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi"};
    
    printf("Le jour de la semaine est : %s\n", jours[jour_semaine]);
}

int main() {
    jour();
    return 0;
}