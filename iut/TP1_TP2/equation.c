#include <stdio.h>
#include <math.h>

double equation(double A, double B, double C)
{
    double delta;
    double res;

    delta = B*B - 4 * A * C ;

    if (delta < 0)
        return 0;
    else if (delta == 0)
    {
        delta = (-B)/(2 * A);
        return delta;
    }
    else
    {
        res = (-B - sqrt(delta))/(2 *A);
        return res; 
    }    
}

int main()
{
    double a = -2;

    printf("equa : %f \n",equation(a, 2, 2));
    return 0;
}
