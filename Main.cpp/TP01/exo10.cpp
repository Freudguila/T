
#include <iostream>

int main() {
    // déclare un tableau de 5 entiers, l'initialise avec les valeurs entrées par l'utilisateur
    int N = 5;
    int tab[N];
    for (int i = 0; i < 5; i++) {
        std::cout << "Entrez le " << i + 1 << "eme entier" << std::endl;
        std::cin >> tab[i];
    }

    // on reprend le code de l'exo9 pour trouver le max
    int max = tab[0];
    for (int i = 1; i < 5; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    // on parcourt le tableau pour compter le nombre d'occurence du max
    int nb_max = 0;
    for (int i = 0; i < 5; i++) {
        if (tab[i] == max) {
            nb_max += 1;
        }
    }

    // affiche le resultat
    std::cout << "le max (" << max << ") est présent " << nb_max << " fois dans le tableau." << std::endl;

    // NOTE : on fait ici deux parcours du tableau (un pour trouver le max, un pour compter les occurences du max) (même 3 avec l'initialisation)
    //        on aurait pu faire le tout en un seul parcours pour avoir un algorithme plus efficace
    //        --> exercice pour vous :)

    return 0;
}