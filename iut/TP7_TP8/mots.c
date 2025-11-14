#include <stdio.h>
#include <string.h>

void mots(char* texte, int longueur_texte)
{
    FILE *file = fopen("exo2.txt", "a");
    if (file == NULL)
    {
        printf("Erreur d'ouverture en écriture.\n");
        return;
    }

    fwrite(texte, sizeof(char), longueur_texte, file);
    fwrite("\n", sizeof(char), 1, file);
    fclose(file);

    file = fopen("exo2.txt", "r");
    if (file == NULL)
    {
        printf("Erreur d'ouverture en lecture.\n");
        return;
    }

    char c;
    printf("Contenu du fichier :\n");
    while ((c = fgetc(file)) != EOF)
        putchar(c);

    fclose(file);
}

int main(void)
{
    mots("test", 4);
    return 0;
}
