# -*- coding: utf-8 -*-

def location(type_voiture, duree, km, forfait):
    res = 0

    if forfait == "Forfaitaire":
        if type_voiture == "Utilitaire":
            i = (80 / 2) * duree + km * (0.30 * 1.5)
            res += 50 + i
        elif type_voiture == "Monospace":
            i = (75 / 2) * duree + km * (0.25 * 1.5)
            res += 50 + i
        elif type_voiture == "Citadine":
            i = (60 / 2) * duree + km * (0.20 * 1.5)
            res += 50 + i
    else:
        if type_voiture == "Utilitaire":
            i = 80 * duree + km * 0.30
            res += 50 + i
        elif type_voiture == "Monospace":
            i = 75 * duree + km * 0.25
            res += 50 + i
        elif type_voiture == "Citadine":
            i = 60 * duree + km * 0.20
            res += 50 + i

    if duree >= 4 and km >= 2000:
        res *= 0.95

    return res


types = ["Utilitaire", "Monospace", "Citadine"]
forfaits = ["Forfaitaire", "Classique"]
duree = 1
km = 1

for t in types:
    for f in forfaits:
        prix = location(t, duree, km, f)
        print(f"Type: {t}, Forfait: {f}, Durée: {duree}, Km: {km} → Prix {prix:.2f} €")


