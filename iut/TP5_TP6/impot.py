

def montant_impot(R, n):

    res = R/n
    if (res >= 500):
        R = R * 0.2
    elif (res < 500):
        R = R * 0.1
    return R


def revenu_net(R, n):
    return R - montant_impot(R,n)
    


def impot(R, n):

    montant = montant_impot(R,n)
    impot = revenu_net(R,n)
    print(f"\nLe montant des impots est de : {montant}")
    print(f"Le revenue net est de : {impot}")


R = float(input("Revenue : "))
n = int(input("Nombres de membres du foyer : "))
impot(R,n)
