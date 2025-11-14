def conjugaison(verbe):
    voy = "aeiouyAEIOUY"

    
    i = len(verbe)

    
    if i >= 2 and verbe[-1] == 'r' and verbe[-2] == 'e':
        
        radical = verbe[:-2]

        
        temp = 0
        for v in voy:
            if radical[0] == v:
                temp = 1
                break

        
        if temp == 1:
            print(f"j'{radical}e")
        else:
            print(f"je {radical}e")

        print(f"tu {radical}es")
        print(f"il {radical}e")
        print(f"nous {radical}ons")
        print(f"vous {radical}ez")
        print(f"elles {radical}ent")

    else:
        print("Erreur : le mot ne se termine pas par 'er'.")



mot = "ester"
conjugaison(mot)
