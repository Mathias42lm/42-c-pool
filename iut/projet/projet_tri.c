#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void swap(int* a, int* b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void valid_tri(int T[], int n)
{
    int i;

    i = 0;
    while (i < n - 1)
    {
        if (T[i] > T[i + 1])
        {
            printf("Le tableau n'est pas trié !\n");
            return;
        }
        i++;
    }
    printf("Le tableau est trié !\n");
}

void inv_tab(int dest[],int T[], int n)
{
    int i,j;

    i = 0;
    j = n - 1;
    while (i < n)
    {
        dest[j] = T[i];
        i++;
        j--;
    }

}

void copie_tab(int dest[],int T[], int n)
{
    int i;
    i = 0;
    while (i < n)
    {
        dest[i] = T[i];
        i++;
    }
}

void affiche_tab(int T[], int n)
{
    int i;

    i = 0;
    while (i != n)
    {
        printf("%d, ",T[i]);
        i++;
    }
}

void remplir_tab(int T[], int n)
{
    int i;

    i = 0;
    srand(time(NULL));
    while (i != n)
    {
        T[i] = rand() % 100;
        i++;
    }
}

void tri_selection(int T[], int n)
{
    int j,min,k;

    j = 0;
    while (j < n - 1)
    {
        min = j;
        k = j+ 1;
        while (k < n)
        {
            if (T[k] < T[min])
                min = k;
            k++;
        }
        if (min != j)
            swap(&T[j], &T[min]);
        j++;
        
    }
    
}

void tri_bulles(int T[], int n)
{
    int i, j, ech;

    ech = 1;
    i = n;
    while (i > 0 && ech == 1)
    {
        ech = 0;
        j = 0;
        while (j < i - 1)
        {
            if (T[j] > T[j+1])
            {
                swap(&T[j], &T[j + 1]);
                ech = 1;
            }
            j++;
        }
        i--;
    }
}

void tri_peigne(int T[], int n)
{
    int ech, h,j;

    ech = 1;
    h = n;
    while (h > 1 || ech)
    {
        h = (int) h/1.3;
        if (h < 1)
            h = 1;
        ech = 0;
        j = 0;
        while (j + h < n)
        {
            if (T[j] > T[j+h])
            {
                swap(&T[j],&T[j+h]);
                ech = 1;
            }
            j++;
        }
    }
}

void compaison(int longueur, int asc)
{
    int T[longueur];
    int copie1[longueur];
    int copie2[longueur];
    int copie3[longueur];
    int rev[longueur];
    double duree1, duree2, duree3;

    
    remplir_tab(T, longueur);
    copie_tab(copie1,T,longueur);
    copie_tab(copie2,T,longueur);
    copie_tab(copie3,T,longueur);


    clock_t debut;

    debut = clock();
    tri_bulles(copie1,longueur);
    clock_t fin1 = clock();
    duree1 = difftime(fin1, debut);

    debut = clock();
    tri_peigne(copie2,longueur);
    clock_t fin2 = clock();
    duree2 = difftime(fin2, debut);

    debut = clock();
    tri_selection(copie3,longueur);
    clock_t fin3 = clock();
    duree3 = difftime(fin3, debut);


    affiche_tab(T, longueur);
    printf("\n");

    if (asc >= 0)
    {
        affiche_tab(copie1, longueur);
        printf("\n");

        affiche_tab(copie2, longueur);
        printf("\n");
        affiche_tab(copie3, longueur);
        printf("\n");
    }
    else
    {
        inv_tab(rev, copie1, longueur);
        affiche_tab(rev, longueur);
        printf("\n");

        inv_tab(rev, copie2, longueur);
        affiche_tab(rev, longueur);
        printf("\n");

        inv_tab(rev, copie3, longueur);
        affiche_tab(rev, longueur);
        printf("\n");
    }   

    valid_tri(copie1,longueur);
    valid_tri(copie2,longueur);
    valid_tri(copie3,longueur);

    printf("Durée tri à bulles : %f milli secondes\n", duree1);
    printf("Durée tri à peigne : %f milli secondes\n", duree2);
    printf("Durée tri par sélection : %f milli secondes\n", duree3);

}

int main(void)
{
  int asc = 5;
  int longueur = 10000;
  compaison(longueur, asc);

  return EXIT_SUCCESS;
}

