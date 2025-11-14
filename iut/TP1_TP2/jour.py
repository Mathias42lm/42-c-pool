
# -*- coding: utf-8 -*-

def jour():

    jour = int(input("Entrez le jour : "))
    mois = int(input("Entrez le mois : "))
    annee = int(input("Entrez l'année : "))

    if mois < 1 or mois > 12:
        print("Mois invalide.")
        return

    if annee < 1600 or annee > 2199:
        print("Année hors limites.")
        return

    bissextile = (annee % 4 == 0 and annee % 100 != 0) or (annee % 400 == 0)

    jours_par_mois = [31, 29 if bissextile else 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31]

    if jour < 1 or jour > jours_par_mois[mois - 1]:
        print("Jour invalide pour ce mois et cette année.")
        return

    deux_derniers = annee % 100

    somme = deux_derniers + (deux_derniers // 4)

    numeros_mois = [1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6]
    somme += numeros_mois[mois - 1]

    if bissextile and (mois == 1 or mois == 2):
        somme -= 1


    if 1600 <= annee <= 1699:
        somme += 6
    elif 1700 <= annee <= 1799:
        somme += 4
    elif 1800 <= annee <= 1899:
        somme += 2
    elif 1900 <= annee <= 1999:
        somme += 0
    elif 2000 <= annee <= 2099:
        somme += 6
    elif 2100 <= annee <= 2199:
        somme += 4

    somme += jour
    reste = somme % 7


    jours_semaine = {
        1: "Dimanche",
        2: "Lundi",
        3: "Mardi",
        4: "Mercredi",
        5: "Jeudi",
        6: "Vendredi",
        0: "Samedi"
    }

    print(f"Le {jour:02d}/{mois:02d}/{annee} est un {jours_semaine[reste]}.")


jour()