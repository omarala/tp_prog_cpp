#!/usr/bin/python3

# # import numpy as np su
import matplotlib.pyplot as plt
import sys
 
#crée un itérateur de point
def iterator_point(fichier):
    for line in fichier:
        line = line.strip()
        # res = line.split(",")
        res = float(line)
        yield res
def create_plot():
    #on ouvre un fichier .txt du format
    # float,float
    str_file1 = "./dataXor.txt"


    alean = [1]
    aleanplus1 = []


    with open(str_file1, "r") as fichier:
        generator = iterator_point(fichier)
        aleanplus1.append(generator.__next__())
        for point in generator:
            alean.append(aleanplus1[-1])
            aleanplus1.append(point)


    fig = plt.figure()

    plt.scatter(alean, aleanplus1, s=10)
 
    plt.title("Tirage(n+1) en fonction de Tirage(n)")
    ax = fig.add_subplot(111)
    # fig.subplots_adjust(top=0.85)
    # plt.legend(bbox_to_anchor=(0., 1.02, 1., .102), loc=3,
    #    ncol=2, mode="expand", borderaxespad=0.)
    # # recup_config("../data/config.txt", ax)
    ax.set_xlabel('N eme nombre aleatoire')
    ax.set_ylabel('N+1 eme nombre aleatoire')

    plt.show()



if __name__ == "__main__" :
    create_plot()
