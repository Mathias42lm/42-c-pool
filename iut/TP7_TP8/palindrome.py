def palindrome(mot):

    i = 0
    l = 0
    le = len(mot)
    while (l != le):
        l+=1
    while (i != le):
    
        if (mot[i] != mot[l-1]):
        
            return 1
        i+=1
        l-=1
    return 0


mot = "test"
print(f"{palindrome(mot)}")

