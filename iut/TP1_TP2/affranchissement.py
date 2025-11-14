def affranchissement(poids, nb_jours):
    if nb_jours == 1:
        if (poids <= 20):
            return 1.28
        elif (poids > 20 and poids <= 100):
            return 1.28*2
        elif (poids > 100 and poids <= 250):
            return 1.28*4
        elif (poids > 250 and poids <= 500):
            return 1.28*6
        elif (poids > 500 and poids <= 3000):
            return 1.28*8
    elif nb_jours == 2:
        if (poids <= 20):
            return 1.08
        elif (poids > 20 and poids <= 100):
            return 1.08*2
        elif (poids > 100 and poids <= 250):
            return 1.08*4
        elif (poids > 250 and poids <= 500):
            return 1.08*6
        elif (poids > 500 and poids <= 3000):
            return 1.08*8
        
    elif nb_jours == 4:
        if poids <= 20:
            return 1.06
        elif poids > 20 and poids <= 100:
            return 1.06*2
        elif poids > 100 and poids <= 250 :
            return 1.06*4
    return nb_jours


print(affranchissement(3000,1))