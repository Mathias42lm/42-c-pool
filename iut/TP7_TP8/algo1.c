#include <stdio.h>
#include <string.h>

void algo1(char* lignes[], int nb_lignes, char* mode)
{
    int i;

    

    i = 0;
    /* Open file in write mode by default, but use append mode when asked */
    FILE *file;
    if (strcmp(mode, "ajout") == 0)
    {
        file = fopen("example.txt", "a");
    }
    else
    {
        file = fopen("example.txt", "w");
    }
    if (file == NULL)
    {
        printf("Erreur");
        return;
    }
    if (strcmp(mode, "ecriture") == 0)
    {
        while (i < nb_lignes)
        {
            fwrite(lignes[i], sizeof(char),strlen(lignes[i]), file);
            fwrite("\n", sizeof(char),1, file);
            i++;
        }
    }
    else if (strcmp(mode, "ajout") == 0)
    {
        while (i < nb_lignes)
        {
            fwrite(lignes[i], sizeof(char), strlen(lignes[i]), file);
            fwrite("\n", sizeof(char), 1, file);
            i++;
        }
    }
    

    
    fclose(file);
    
}

int main(void)
{
    char *ligne[4];
    ligne[0] = "Test";
    ligne[1] = "OK";
    ligne[2] = "why not";
    ligne[3] = "si ca ne marche pas c'est ok";



    algo1(ligne,4,"ajout");
    return 0;
}
