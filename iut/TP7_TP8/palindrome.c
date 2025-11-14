int palindrome(char mot[])
{
    int i;
    int l;

    i = 0;
    l = 0;
    while (mot[l])
        l++;
    while (mot[i])
    {
        if (mot[i] != mot[l-1])
        {
            return 1;
        }
        i++;
        l--;
    }
    return 0;
}

#include <stdio.h>
int main(void)
{
    char mot[] = "test";
    printf("%i", palindrome(mot));
    return 0;
}
