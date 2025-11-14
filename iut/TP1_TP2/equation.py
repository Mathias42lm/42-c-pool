import math

def equation(A, B, C):
    delta = B*B - 4 * A * C
    if (delta < 0):
        return 0
    elif (delta == 0):
        delta = (-B)/(2 * A)
        return delta
    else:
        delta1 = (-B - math.sqrt(delta))/(2 * A)
        delta2 = (-B + math.sqrt(delta))/(2 * A)
        return delta1, delta2 

print(equation(-2,2,2))