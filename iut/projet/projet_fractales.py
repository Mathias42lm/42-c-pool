import numpy as np
import matplotlib.pyplot as plt

def mandelbrot_iter(x, y):
    n_max_iter = 200
    c = complex(x, y)
    z = 0.j # il s'agit ici du terme z_0
    # il faut completer la fonction
    for k in range(n_max_iter):
        if abs(z) > 2:
            return k
        z = z*z + c
    return n_max_iter


# ---------------------------------------------------------------------------
# AJOUT : fonction iter_julia
# ---------------------------------------------------------------------------
def iter_julia(x, y, c):
    n_max_iter = 200
    z = complex(x, y)

    for k in range(n_max_iter):
        if abs(z) > 2:
            return k
        z = z*z + c

    return n_max_iter
# ---------------------------------------------------------------------------


def generer_axe(taille_axe, n, centre):
    axe = [0] * n

    # il faut completer la fonction
    demi = taille_axe / 2
    axe = np.linspace(centre - demi, centre + demi, n)

    return axe

def tracer_domaine(taille_axe, centre, n):

    J = np.zeros((n, n))
    axe_X = generer_axe(taille_axe, n, centre[0])
    axe_Y = generer_axe(taille_axe, n, centre[1])
    global mode, c_param

    for i, x in enumerate(axe_X):
        for j, y in enumerate(axe_Y):

            if mode == "mandelbrot":
                J[i, j] = mandelbrot_iter(x, y)

            elif mode == "julia":
                J[i, j] = iter_julia(x, y, c_param)

            else:
                raise ValueError("Mode inconnu : utilisez 'mandelbrot' ou 'julia'")
    # -----------------------------------------------------------------------

    return axe_X, axe_Y, J


def afficher_fractale():
    centre = [-0.5, 0]
    taille_axe = 2
    n = 1024
    cmap = "cubehelix"
    X, Y, J = tracer_domaine(taille_axe, centre, n)

    plt.figure(figsize=(16,16), dpi=200)
    plt.pcolormesh(X, Y, J.T, cmap=cmap)
    plt.show()

mode = "mandelbrot"
c_param = 0

afficher_fractale()