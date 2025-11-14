#include <stdio.h>

void caracteres_ASCII_v1()
{
    int i;

    i = 0;
    while(i!=255)
    {
        printf("LE caractere numero %d est %c\n",i,i);
        i++;
    }
    
}

int main()
{
    caracteres_ASCII_v1();
    return 0;
}
