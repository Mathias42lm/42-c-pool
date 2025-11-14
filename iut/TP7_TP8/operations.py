def operations():
    try:
        with open("operations.txt", "r") as fin, open("resultats.txt", "w") as fout:
            for ligne in fin:
                ligne = ligne.strip()
                if not ligne:
                    continue

                try:
                    a, op, b = ligne.split()
                    a, b = int(a), int(b)

                    if op == '+':
                        res = a + b
                    elif op == '-':
                        res = a - b
                    elif op == '*':
                        res = a * b
                    elif op == '/':
                        if b == 0:
                            fout.write(f"{ligne} = Erreur (division par zéro)\n")
                            continue
                        res = a / b
                    else:
                        fout.write(f"{ligne} = Erreur (opérateur inconnu)\n")
                        continue

                    fout.write(f"{ligne} = {res}\n")

                except Exception as e:
                    fout.write(f"{ligne} = Erreur ({e})\n")

        print("Résultats écrits dans resultats.txt")

    except FileNotFoundError:
        print("Erreur : le fichier operations.txt est introuvable.")


operations()
