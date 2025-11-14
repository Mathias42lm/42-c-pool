#include <stdio.h>
#include <stdlib.h>

void conjugaison(char verbe[])
{
    int i,l;
    char *voy = "aeiouyAEIOUY";
    int temp;

    i = 0;
    l = 0;
    temp = 0;
    while (verbe[i])
    {   
        i++;
    }

    if (verbe[i-1] == 'r' && verbe[i-2] == 'e')
    {
        char *test;
        test = (char *) malloc(i-2 * sizeof(char));
        test[i] = '\0';


        while (l != i-2)
        {
            test[l] = verbe[l];
            l++;
        }
        l = 0;
        

        while (voy[l])
        {
            if (voy[l] == test[0])
            {
                temp =1;
                break;
            }
            l++;
        }
        
        if (temp == 1)
            printf("j'%se\n", test);
        else
            printf("je %se\n", test);
        
        
        printf("tu %ses\n", test);
        printf("il %se\n", test);
        printf("nous %sons\n", test);
        printf("vous %sez\n", test);
        printf("elles %sent\n", test);

        free(test);
    }
    else
    {
        printf("Erreur");
    }
    
    
}

int main(void)
{
    char mot[] = "ester";
    conjugaison(mot);
    
    return 0;
}
