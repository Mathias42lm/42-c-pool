import random

def choixvalide(n):

    if (n >= 1 and n <= 3):
        return 1
    else:
        return 0
    


def jeux(nb_allumette, joueur_depart):


    print(f"Le nombre d'allumettes dans le jeu est egal a {nb_allumette}")
    print(f"Quel est le nombre d'allumette prises par le joueur {joueur_depart} ?")
    nb = int(input())
    if (choixvalide(nb)):
        return nb_allumette - nb
    else:
    
        print("Votre choix n'ai pas valide.")
        return jeux(nb_allumette, joueur_depart)  
      


def allumette1(nb_allumette, joueur_depart):

    while (nb_allumette >= 2):
    
        if (joueur_depart == 1):
        
            nb_allumette = jeux(nb_allumette, joueur_depart)
            joueur_depart = 2
        
        elif (joueur_depart == 2):
        
            nb_allumette = jeux(nb_allumette, joueur_depart)
            joueur_depart = 1
        
        else:
        
            print("Le nb est trop grand.")
            return
        
    
    if (nb_allumette >=0):
    
        if (joueur_depart == 1):
            joueur_depart = 2
        else:
            joueur_depart = 1
    
    
    print(f"Bravo !!! Le joueur {joueur_depart} a gagner.")
    



    import random

    
def jeuxh(nb_allumette):



    print(f"Le nombre d'allumettes dans le jeu est egal a {nb_allumette}")
    print("Quel est le nombre d'allumette que vous alez retirer ? ")
    nb = int(input())
    if (choixvalide(nb)):
        return nb_allumette - nb
    else:
        print("Votre choix n'ai pas valide.")
        return jeuxh(nb_allumette)  
      


def jeuxbot(nb_allumette):

    nb = random.randint(1,3)
    print(f"Le nombre d'allumettes dans le jeu est egal a {nb_allumette}")
    print(f"Le nombre d'allumettes prises par l'ordinateur est egale a {nb}")
    return nb_allumette - nb



def allumette2(nb_allumette,joueur_depart):

    while (nb_allumette >= 2):
    
        if (joueur_depart == 1):
        
            nb_allumette = jeuxh(nb_allumette)
            joueur_depart = 2
        
        elif (joueur_depart == 2):
        
            nb_allumette = jeuxbot(nb_allumette)
            joueur_depart = 1
        
        else:
        
            print("Le nb est trop grand.")
            return
        
    
    if (nb_allumette >0):
    
        if (joueur_depart == 2):
            print(f"Le nombre d'allumettes dans le jeu est egal a {nb_allumette}\nBravo !!! Vous avez gagne.")
        else:
            print(f"Le nombre d'allumettes dans le jeu est egal a {nb_allumette}\nDommage !!! Vous avez perdue.")
    
    else:
        if (joueur_depart == 1):
            print("Le nombre d'allumettes dans le jeu est egal a {nb_allumette}\nBravo !!! Vous avez gagne.")
        else:
            print("Le nombre d'allumettes dans le jeu est egal a {nb_allumette}\nDommage !!! Vous avez perdue.")
     



