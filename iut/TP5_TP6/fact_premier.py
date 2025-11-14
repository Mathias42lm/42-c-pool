def is_prime(n):
    if n <= 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    i = 3
    while i * i <= n:
        if n % i == 0:
            return False
        i += 2
    return True


def fact_premier(n):
    i = 2
    factors = []
    temp = n
    while i <= temp:
        if is_prime(i) and temp % i == 0:
            factors.append(i)
            while temp % i == 0:
                temp //= i
        i += 1
    print(f"{n} :", *factors)


n = int(input("Entrez un entier n : "))
if n <= 1:
    print("Valeur invalide.")
else:
    fact_premier(n)


