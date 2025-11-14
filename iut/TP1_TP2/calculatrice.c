#include <math.h>
#include <stdio.h>

double calculatrice(int op, double a, double b)
{
    double res;

    if (op == 1)
        res = a + b;
    else if (op == 2)

        res = a - b;
    else if (op == 3)
        res = a * b;
    else if (op == 4)
        if (b!=0)
            res = a / b;
    else if (op == 5)
        if (a >= 0)
            res = sqrt(a);
    return res;
}

int main(void)
{
    
    double a = 25;
    double b = 5;

    printf("Calculatrice 1:  %f\n f", calculatrice(1,a,b));
    printf("Calculatrice 2:  %f\n", calculatrice(2,a,b));
    printf("Calculatrice 3:  %f\n", calculatrice(3,a,b));
    printf("Calculatrice 4:  %f\n", calculatrice(4,a,b));
    printf("Calculatrice 5:  %f\n", calculatrice(5,a,b));

    return 0;
}