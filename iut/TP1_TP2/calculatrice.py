import math

def calculatrice(operation, a, b):
    if operation == 1 or operation == '+':
        res = a + b 
    elif operation == 2 or operation == '-':
        res = a - b 
    elif operation == 3 or operation == '*':
        res = a * b 
    elif operation == 4 or operation == '/':
        if b != 0:
            res = a / b
    elif operation == 5 or operation == 'sqrt':
        if a >= 0:
            res = math.sqrt(a)
    return res

print(calculatrice(1,25,5))
print(calculatrice(2,25,5))
print(calculatrice(3,25,5))
print(calculatrice(4,25,5))
print(calculatrice(5,25,5))