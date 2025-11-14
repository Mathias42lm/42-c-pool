def algo1(lignes, nb_lignes, mode):

    i = 0
    with open("example.txt","w") as file:
        while i < nb_lignes:
            file.write(lignes[i])
            file.write("\n")
            i+=1

liste = ["test","ok","ahhhh", "si et seulement si"]
algo1(liste, 4,"ok")
