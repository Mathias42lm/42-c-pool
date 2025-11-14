def moyenne1(notes, nb_notes):

    i = 0
    moyenne = 0
    min = 0
    max = 0
    while i != nb_notes:
        if i == 0:
            min = notes[i]
            max = notes[i]
        elif max < notes[i]:
            max = notes[i]
        elif min > notes[i]:
            min = notes[i]
        

        moyenne = moyenne + notes[i]

        i+=1
    moyenne = moyenne / nb_notes
    return moyenne, min, max


notes = [15, 18, 12, -3, 20, 0]
moyenne, min, max = 0, 0, 0
nb_notes = 6
moyenne, min, max = moyenne1(notes, nb_notes)
print("Moyenne: {}, Min: {}, Max: {}".format(moyenne, min, max))
