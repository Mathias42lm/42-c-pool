def premavcn(k, n):
    while (n != 0):  
        tmp = k % n
        k = n
        n = tmp
    if (k == 1):
        return 1
    return 0

def indicatrice(n):
    k = 1
    res = 0
    while (k <= n):
    
        if (premavcn(k, n)):
            res+=1
        k+=1
    
    return res


n = int(input(("N : ")))
x = indicatrice(n)
print(f"Le resultat est : {x}")


