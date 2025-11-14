import math

def chute(hauteur):
    g = 9.80665
    i = 0
    res = 2 * hauteur
    res = res / g
    res = math.sqrt(res)
    test = res
    
    while (test >= 0):
        print(f"{i}s : {hauteur} m")
        test = test - 1
        i+=1
        hauteur = hauteur - (0.5*g*i*i)
    print(f"{i}s : boum")

chute(100)