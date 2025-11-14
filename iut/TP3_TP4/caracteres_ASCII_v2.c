
#include <stdio.h>

void caracteres_ASCII_v2(int chara)
{
    if (chara <= 255 && chara >= 0)

        printf("Le charactere numero %i est %c\n",chara,chara);
    else

        printf("Le charactere numero %i est \n",chara);
    
    
}

int main()
{
    caracteres_ASCII_v2(116);
    return 0;
}
