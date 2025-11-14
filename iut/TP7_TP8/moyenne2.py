def moyenne2(notes, coeff, nb_notes):
    i = 0
    res = 0
    while i != nb_notes:
        res = res + notes[i] * coeff[i]
        i += 1
    res = res / nb_notes
    return res


notes = [15, 18, 12, -3, 20, 0]
coeff = [1, 2, 3, 4, 1, 6]
nb_notes = 6
moyenne = moyenne2(notes, coeff, nb_notes)
print("Moyenne:", moyenne)