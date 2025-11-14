#include <stdio.h>

void operations()
{
    FILE *fin = fopen("operations.txt", "r");
    FILE *fout = fopen("resultats.txt", "w");

    if (fin == NULL || fout == NULL)
    {
        printf("Erreur d'ouverture du fichier.\n");
        return;
    }

    int a, b;
    char op;
    float resultat;

    while (fscanf(fin, "%d %c %d", &a, &op, &b) == 3)
    {
        switch (op)
        {
            case '+':
                resultat = a + b;
                fprintf(fout, "%d + %d = %.2f\n", a, b, resultat);
                break;
            case '-':
                resultat = a - b;
                fprintf(fout, "%d - %d = %.2f\n", a, b, resultat);
                break;
            case '*':
                resultat = a * b;
                fprintf(fout, "%d * %d = %.2f\n", a, b, resultat);
                break;
            case '/':
                if (b != 0)
                    resultat = (float)a / b, fprintf(fout, "%d / %d = %.2f\n", a, b, resultat);
                else
                    fprintf(fout, "%d / %d = Erreur (division par zéro)\n", a, b);
                break;
            default:
                fprintf(fout, "%d %c %d = Erreur (opérateur inconnu)\n", a, op, b);
        }
    }

    fclose(fin);
    fclose(fout);

    printf("Résultats écrits dans resultats.txt\n");
}

int main(void)
{
    operations();
    return 0;
}
